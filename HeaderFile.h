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
    void load(string filePath){
        //carga de los datos de Archivo.header
        string linea;
        fstream archivo;
        archivo.open(filePath,ios::in);
        if (archivo.is_open()) {
            getline(archivo,linea);
            n = stoi(linea);
            attr = new string[n];
            tipo_de_campo = new string[n];

            for (int i = 0 ;i < n;i++){
                getline(archivo,linea);
                attr[i] = linea;
                getline(archivo,linea);
                tipo_de_campo[i] = linea;
            }
            archivo.close();
            cout << "succesfully loaded"<< endl;
        } else{
            cout << "coudnt load the file"<< endl;
        }


    };

    void save(){
        fstream archivo ;
        archivo.open(path,ios::out);
        if (archivo.is_open()) {
            archivo << n << endl;
            for (int i = 0 ;i < n;i++){
                archivo << attr[i]<<endl;
                archivo << tipo_de_campo[i]<<endl;
            }
            archivo.close();
            cout << "Header file is saved\n";
        } else{
            cout << "coudnt save the file"<< endl;
        }
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

    void getInputFromUser(){
        //especificacion de uso
        cout << "Ingresa el numero de campos : ";
        //ingreso del numero de columnas
        int s;
        cin >> s;
        this->n = s;
        cout << endl;
        //Ingreso de los atributos
        //ingreso de los tipos
        attr = new string[n];
        tipo_de_campo = new string[n];
        for (int i=0;i<s;i++){
            cout << "nombre del campo "<< i+1 << " : " ;
            cin >> attr[i] ;
            cout << endl;
            cout << "tipo del dato del campo " << attr[i]<< " : ";
            cin >> tipo_de_campo[i];
            cout << endl;
        }

    }


    void print(){
        cout << "numero de atributos : " << n<< endl;
        for (int i=0;i<n;i++){
            cout << attr[i]<< " tipo: "<< tipo_de_campo[i] << endl;
        }
    };


};



#endif //BD2_PROYECTO1_HEADERFILE_H
