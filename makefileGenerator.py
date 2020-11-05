import os
import shutil

def setFolderDir(path):
    global ogDir
    ogDir = os.getcwd()

    global ogPath

    if path != "":
        ogPath = path
        try:
            os.chdir(path)
        except:
            print("")
        pass
    else:
        ogPath = ogDir
        

def getFiles():
    
    OriginalFiles = os.listdir()
    
    Folders = list(())

    for f in OriginalFiles:
        if f.find(".") < 0:
            try:
                os.chdir(ogPath + "\\" + f)
                Folders.append(f)
                os.chdir(ogPath)
                pass
            except:
                print(f + " is not a folder.")
                pass
        
    getAndCopyFolders(Folders)

    os.chdir(ogPath + "\\Build")

    NewFiles = list(())
    for f in OriginalFiles:
        if f.endswith(".h"):
            headfile = open(f, "r")
            lines = headfile.readlines();
            headfile.close()

            i = 0
            for l in lines:

                if l.find("include") >= 0 and (l.find("/") >= 0 or l.find("\\") >= 0) and not l.find("//") >= 0:
                    if l.find("include") and l.rfind("/") >= 0:
                        lines[i] = "#include \"" + l[(l.rindex("/") + 1): -1] + "\n"
                            
                
                i = i + 1 
            
            headfile = open(f, "w")
            headfile.writelines(lines)
            headfile.close()


        if f.endswith(".cpp"):
            FileName = f.replace(".cpp", "")
            NewFiles.append(FileName)

    return NewFiles

def getAndCopyFolders(Folders):
     
    try:
        os.mkdir(ogPath + "\\Build")
    except:
        
        print("Build already exists")

    for f in Folders:
        try:
            os.chdir(ogPath + "\\" + f)
            copyFiles(os.listdir(), f)
            os.chdir(ogPath)
            pass
        except:
            print(f + " is not a folder.")
            pass

def copyFiles(files, folderName):   
    
    for f in files:
        if f.endswith(".cpp") or f.endswith(".h"):
            original = ogPath + "\\" + folderName + "\\" + f
            target = ogPath + "\\Build\\" + f
            shutil.copyfile(original, target)
            pass


def makeMakefile(main):

    print ("Making makefile...")

    fileNames = getFiles()

    fileString = "FILES = "
    for f in fileNames:
        temp = f + ".o "
        fileString = fileString + temp

    makefile = open("makefile", "w")
    makefile.write(fileString + "\n\n")
    

    mainString = "{0}: $(FILES)\n\tg++ -o {0} $(FILES)"
    mainString = mainString.format(main)
    
    makefile.write(mainString + "\n\n")
    

    for f in fileNames:
        dotOString = "{0}.o:\n\tg++ -c -g {0}.cpp"
        dotOString = dotOString.format(f)

        makefile.write(dotOString + "\n\n")


    runString = "run: {0}\n\t./{0}"
    runString = runString.format(main)

    makefile.write(runString + "\n\n")


    cleanString = "clean:\n\trm {0} *.o\n\tclear"
    cleanString = cleanString.format(main)

    makefile.write(cleanString + "\n\n")
