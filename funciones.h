// Created by felix on 9/24/19.
#ifndef BD2_PROYECTO1_FUNCIONES_H
#define BD2_PROYECTO1_FUNCIONES_H

#include <cstring>
#include <string>
using namespace std;

char* s_to_char(const string& palabra)
{
    char* cstr = new char;
    strcpy(cstr,palabra.c_str());
    return cstr;
}

#endif //BD2_PROYECTO1_FUNCIONES_H
