//
// Created by daniel on 9/19/19.
//

#ifndef BD2_PROYECTO1_RECORD_H
#define BD2_PROYECTO1_RECORD_H


#include <bits/stdc++.h>
#include <fstream>

using namespace std;

class Record{
public:
    string path;
    int pos;
    int n ; //
    int size;
    string* tipos; //
    void setValues(string* tipos, int n){
        this->tipos = tipos;
        this->n = n;

        int suma = 0;
        for (int i=0;i<n;i++){
            if (tipos[i] == "int")
                suma += sizeof(int);
            else{
                // c12 = char[12] o c20 = char[20]
                string tam = tipos[i].substr(1);  //tamaño del char[]
                suma += stoi(tam)* sizeof(char);
            }
        }
        size = suma;
    };

    void Imprimir(){


    };

    int getSize(){
        return size;
    }



};

#endif //BD2_PROYECTO1_RECORD_H
