cmake_minimum_required(VERSION 3.23)
project(untitled)
include_directories(Model)
include_directories(Stack)
include_directories(Services)

set(VALIDATOR Services/Validator.cpp Services/Validator.h)
set(NODE Model/Node/Node.h)
set(HASHTABLE Model/HashTable/HashTable.h Model/HashTable/HashTable.cpp)
set(DICTIONARY Model/Dictionary/Dictionary.h Model/Dictionary/Dictionary.cpp)
set(MENU Menu/MenuDictionary.cpp Menu/MenuDictionary.h Menu/MenuHashTable.cpp Menu/MenuHashTable.h)

add_executable(Lab4 main.cpp ${VALIDATOR} ${NODE} ${HASHTABLE} ${DICTIONARY} ${MENU})

set(CMAKE_CXX_STANDARD 20)

