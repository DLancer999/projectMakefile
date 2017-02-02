# projectMakefile
General Makefile suitable for any simple c++ project,
developed on unix with g++.

To compile simply type "make" in this folder.
To clean type "make clean".

Project should be organized as:
All src files should be in the folder /src

When compiling, folders obj and deps are to be created, containing
the compiled "*.o" files and their dependencies, respectively.
In root folder, an executable with the name of the project,
as declared in the Makefile, is to be created.
