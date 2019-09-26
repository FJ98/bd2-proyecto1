// Created by felix on 9/24/19.
#ifndef BD2_PROYECTO1_FUNCIONES_H
#define BD2_PROYECTO1_FUNCIONES_H
#define NONE "null"


#include <cstring>
#include <string>
using namespace std;


static char* s_to_char(const string& palabra)
{
    char* cstr = new char;
    strcpy(cstr,palabra.c_str());
    return cstr;
}

static char* s_to_char_with_size(const string& palabra, int n){
    char* cstr = new char[n];
    for (int i=0;i<n;i++){
        cstr[i] = ' ';
    }

    strcpy(cstr,palabra.c_str());
    return cstr;

}

#endif //BD2_PROYECTO1_FUNCIONES_H
