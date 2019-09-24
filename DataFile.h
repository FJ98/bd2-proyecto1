//
// Created by daniel on 9/24/19.
//

#ifndef BD2_PROYECTO1_DATAFILE_H
#define BD2_PROYECTO1_DATAFILE_H

#include <bits/stdc++.h>
#include "record.h"

using namespace std;

class DataFile{
public:
    string path; //ruta para acceder a la data
    int size;

//    DataFile() = default;

    void load(){

    }

    Record* getRecord(int i){
        Record * record;


    }

    void setPath(string path){
        this->path = path;
    }


    void inicialize(){
        fstream archivo ;
        archivo.open(path,ios::app);
        archivo.close();

        cout <<"creando archivo " <<path<<endl;
    };


};


#endif //BD2_PROYECTO1_DATAFILE_H
