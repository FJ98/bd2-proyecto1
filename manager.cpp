// Created by daniel on 9/24/19.
#include "manager.h"

char* ss_to_char(const string& palabra)
{
    char* cstr = new char;
    strcpy(cstr,palabra.c_str());
    return cstr;
}

void Manager::inicializar(){
    this -> bd = "bd";
    mkdir(ss_to_char(PATH),0777);
}
