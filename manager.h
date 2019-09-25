//
// Created by daniel on 9/24/19.
//
#ifndef BD2_PROYECTO1_MANAGER_H
#define BD2_PROYECTO1_MANAGER_H

#include <bits/stdc++.h>
#include "record.h"
#include <sys/stat.h>
#include "archivo.h"
#include "funciones.h"
using namespace std;

class Manager {
private:
	string bd;
public:
    void inicializar(){
        this -> bd = "bd";
        mkdir(s_to_char(PATH),0777);
    };
};






#endif //BD2_PROYECTO1_MANAGER_H
