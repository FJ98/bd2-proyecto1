//
// Created by daniel on 9/24/19.
//

#ifndef BD2_PROYECTO1_DATAFILE_H
#define BD2_PROYECTO1_DATAFILE_H

#include <bits/stdc++.h>
#include "record.h"
#include "funciones.h"

using namespace std;

class DataFile{
public:
    string path; //ruta para acceder a la data
    //string* tipo_campo;
//    DataFile() = default;
    Record* record;

    void load(){

    }

    bool insert(Record* recordObj) {
        fstream archivo;
        archivo.open(path,ios::out|ios::app | ios::binary);
        int size = recordObj->size;
        int n = recordObj->cantidadDeCampos;
        string *tipos = recordObj->tipos;
        string *values = recordObj->values;
        if (archivo.is_open()) {
            for (int i = 0; i < n; i++) {
                if (tipos[i] == "int") {
                    int intValue = stoi(values[i]);
                    archivo.write((char *)&intValue, sizeof(int));
                } else {
                    string charLength = tipos[i].substr(1);//tamaño del char[]
                    int length = stoi(charLength);
                    char* charValue = s_to_char_with_size(values[i],length);
                    char r[length];

                    for (int i=0;i<length;i++){

                        r[i] = charValue[i];
                    }
                    archivo.write(charValue, sizeof(char) * length);

                }
            }

            archivo.close();

            cout << "Record successfully inserted\n";
            return true;
        } else {
            cout << "coudnt open the file" << endl;
            return false;
        }
    }

    Record* search(int pos){

        fstream archivo ;
        archivo.open(path,ios::in|ios::binary);

        int logicalPos = (pos-1)*record->size;
        int size = record->size;
        int n = record->cantidadDeCampos;
        string* tipos = record->tipos;
        if (archivo.is_open()) {
            archivo.seekg(logicalPos);
            for (int i=0;i<n;i++){
                if (tipos[i]=="int"){
                    int intValue;
                    archivo.read((char*)&intValue, sizeof(int));
                    record->values[i] = to_string(intValue);

                } else{
                    string charLength = tipos[i].substr(1);//tamaño del char[]
                    int length = stoi(charLength);
                    cout <<"length = " <<length << endl;
                    char charValue[length];

                    archivo.read((char *)&charValue, sizeof(char)*length);
                    cout << charValue <<endl;
                    string s = "";
                    for (int j=0;j<length;j++){
                        s.push_back(charValue[j]);
                    }
                    cout <<"valor de s :" <<s;
                    record->values[i] = s;
                }
            }

            archivo.close();
            cout << "search success\n";
        } else{
            cout << "coudnt open the file"<< endl;
        }
        return record;
    }

    void setFileFormat(string path,string* tipo,string* attr,int n){
        this->path = path;
        //crear el record
        record = new Record;
        record->setValues(tipo,attr,n);
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
