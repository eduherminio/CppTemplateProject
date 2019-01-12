# CppTemplateProject
Template for C++ projects

## App

`App` (main project) can be compiled from both VisualStudio (`.vcxproj`) and `build.sh` script.

## AppTest (test project)

`AppTest` (test project) requires `googletest` and (for now) it's only configured to be compiled using VisualStudio.

Existing settings expect `googletest` to be located at `C:/External/gtest`
  
A compiled version of it can be found [here](https://github.com/eduherminio/googletest). Cloning it into mentioned path should be enough to start working