import makefileGenerator as mG
import shutil

try:
    shutil.rmtree("Build")
except:
    print("Build does not exist. Its a good thing")

# set the path to the cpp files
path = ""
# Create makefile by specifying the main
main = "main"

# the methods
mG.setFolderDir(path)
mG.makeMakefile(main)