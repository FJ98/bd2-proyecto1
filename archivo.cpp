// Created by felix on 9/24/19.
#include "archivo.h"

char* s_to_char(const string& palabra)
{
    char* cstr = new char;
    strcpy(cstr,palabra.c_str());
    return cstr;
}

void Archivo::createTable(string filename){

    filePath = PATH + filename;
    mkdir(s_to_char(filePath),0777);
    cout << "directorio "<<filePath << " creado"<<endl;
    dataPath =filePath + "/" +filename + ".dat";

    headerPath = filePath + "/"+filename + ".header";
    //PATH DE LA DATA Y EL HEADER DEL ARCHIVO
    DataFile  data ;

    cout << dataPath<<endl;
    data.setPath(dataPath);
    data.inicialize();

    HeaderFile header;
    header.setPath(headerPath);
    cout << headerPath<<endl;
    header.inicialize();

}