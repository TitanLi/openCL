# create project

1. create project
    * File->New->C Project
    * ![new project](https://github.com/TitanLi/openCL/blob/master/picture/create.png)
    * Finish
2. binary parsers settings
    * Select the project, then right click. Project->Properties->C/C++ Build->Settings->Binary Parsers, Click PE Windows Parser and Move Up.
    * ![binary parsers settings](https://github.com/TitanLi/openCL/blob/master/picture/binary-parsers.png)
    * click OK
3. clean project
    * ![clean-project](https://github.com/TitanLi/openCL/blob/master/picture/clean-project.png)
4. build project
    * ![build-project](https://github.com/TitanLi/openCL/blob/master/picture/build-project.png)
5. properties settings
    * Select the project, then right click,Project->Properties->C/C++ Build->Settings->GCC C Linker->Libraries
    * ![properties settings](https://github.com/TitanLi/openCL/blob/master/picture/properties.png)
6. GCC in Eclipse to use C99,then for and loop will used
    * Select the project, then right click,Project->Properties->C/C++ Build->Setting->GCC C Compiler->Miscellaneous.In other flags text box add the -std=c99
    * ![c99](https://github.com/TitanLi/openCL/blob/master/picture/c99.png)
