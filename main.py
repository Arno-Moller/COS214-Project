import makefileGenerator as mG
import shutil

try:
    shutil.rmtree("Build")
except:
    print("Build does not exist. Its a good thing")

# set the path to the cpp files
path = "D:\\Skoolwerk\\2020\\Semester 2\\COS 214\\Project\\COS214-Project"
# Create makefile by specifying the main
main = "main"

# the methods
mG.setFolderDir(path)
print(mG.getFiles())
mG.makeMakefile(main)