// Created by daniel on 9/19/19.
#ifndef BD2_PROYECTO1_ARCHIVO_H
#define BD2_PROYECTO1_ARCHIVO_H

#include <bits/stdc++.h>
#include "record.h"
#include <sys/stat.h>  //for creating directories
#include "HeaderFile.h"
#include "DataFile.h"
#include "archivo.h"

#define PATH "bd/"

using namespace std;

struct Atributo{
    char* name;
    char* tipo;
    int pos;
};

enum{ entero, flotante, doble, caracter };

class Archivo{
private:
    string filePath; // nombre del archivo
    string headerPath;
    string dataPath;

    string* atributos;
    int n; //number of attributes

public:
    void insert();
    // carga filename, path de datos y header en memoria RAM.

    void createTable(string filename);

    void load(string filename); // carga el archivo con nombre filename

    void ImprimirDatos(int i);//imprimer los i primeros datos

    void ImprimirDato(int key); // si la key es un entero

    void ImprimirDato(string key); // si la key en un string

    void createStaticHashIndex(string atributo); //crea un indice relacionado al atributo

    void createDinamicHashIndex(string atributo);

    void showData();

    void writeReocrd(Record obj);

    bool exists(string filename); // retorna true si existe la tabla Filename


};



#endif //BD2_PROYECTO1_ARCHIVO_H

  //BD2_PROYECTO1_ARCHIVO_H
  /*d::cout << "Hello World" << std::endl;
    string fileName = "prueba.bin";
    fstream obj;

    obj.open(fileName,ios::binary | ios::app);

    int numeroDeCampos = 3;
    if(obj.is_open()){
        obj.write((char*)& numeroDeCampos, sizeof(numeroDeCampos));
        int r = 3;
        for (int i=0;i<numeroDeCampos;i++){
            obj.write((char*)&r, sizeof(r));
            obj.write(campo[i],r* sizeof(char));
            obj.read(tipoDeDatoCampo[i], sizeof(char));
        }

        obj.close();
    } else cout << "No se pudo abrir el archivo"<< endl;


    Archivo* file = new Archivo;

    file->loadFromFile("prueba.bin");


    void loadFromFile(char* _filename){
        fileName = _filename;
        fstream obj;
        obj.open(this->fileName,ios::binary | ios::in);
        int n;
        if(obj.is_open()){
            obj.read((char*)& numeroDeCampos, sizeof(n));
            int r;

            for (int i=0;i<numeroDeCampos;i++){
                obj.read((char*)&r, sizeof(r));
                obj.read(campo[i],r* sizeof(char));
                obj.read(tipoDeDatoCampo[i], sizeof(char));
            }

            obj.close();
        } else cout << "No se pudo abrir el archivo"<< endl;

    };


    */
