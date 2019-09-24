//
// Created by daniel on 9/24/19.
//

#ifndef BD2_PROYECTO1_HEADERFILE_H
#define BD2_PROYECTO1_HEADERFILE_H

#include <bits/stdc++.h>
#include <fstream>
using namespace std;

class HeaderFile{
public:
    string path;
    int n; //numero de atributos
    string* attr;
    string* tipo_de_campo;
    void load(){
        //carga de los datos de Archivo.header
        string linea;
        ifstream archivo;
        if (archivo.is_open()) {

            getline(archivo,linea);

            n = stoi(linea);

            for (int i = 0 ;i < n;i++){
                getline(archivo,linea);
                attr[i] = linea;
                getline(archivo,linea);
                tipo_de_campo[i] = linea;
            }
            archivo.close();
        } else{
            cout << "coudnt save the file"<< endl;
        }


    };

    void save(){
        ofstream archivo ;
        if (archivo.is_open()) {
            archivo.open(path);
            archivo << n << endl;
            for (int i = 0 ;i < n;i++){
                archivo << attr[i]<<endl;
                archivo << tipo_de_campo[i]<<endl;
            }
            archivo.close();
        } else{
            cout << "coudnt save the file"<< endl;
        }
        cout << "Header file is saved\n";
    }

    void setPath(string path){
        this->path = path;
    };

    void inicialize(){
        fstream archivo ;
        archivo.open(path,ios::app);
        archivo.close();
        cout <<"creando archivo " <<path<<endl;
    };

    void print(){
        cout << "numero de atributos : " << n<< endl;
        for (int i=0;i<n;i++){
            cout << attr[i]<< " tipo: "<< tipo_de_campo[i] << endl;
        }
    };


};



#endif //BD2_PROYECTO1_HEADERFILE_H
