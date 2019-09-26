cmake_minimum_required(VERSION 3.14)
project(bd2_proyecto1)

set(CMAKE_CXX_STANDARD 14)


add_executable(bd2_proyecto1 main.cpp DynamicHash.cpp DynamicHash.h
        archivo.h manager.cpp manager.h HeaderFile.h DataFile.h archivo.cpp funciones.h StaticHash.h "Bucket .h" HashIndex.h)

