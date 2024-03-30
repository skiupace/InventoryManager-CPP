cmake_minimum_required(VERSION 3.20)
project(InverntoryManager)

add_executable(
    main src/main.cpp 
    classes/InventoryClass/InventoryClass.cpp 
    classes/PrintClass/PrintAppMessages.cpp
)