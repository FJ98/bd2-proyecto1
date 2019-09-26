#include <bits/stdc++.h>
#include "record.h"
#include "archivo.h"
#include <dirent.h>
#include <sys/stat.h>  //for creating directories
#include <fstream>
#include "manager.h"
#include "HeaderFile.h"
using namespace std;

int main() {
 
    Manager s;
    s.inicializar();
    //sinicializar();
    //cout << stoi(s);
    //cout << s.size();
    Archivo file ;
    //string file = "Persona";
//    file.createTable("Persona");
    file.createTable("Animal");
   // HeaderFile header;
    //header.load("bd/Animal/Animal.header");
    //header.print();
    file.load("Animal");


 //   file.createStaticHashIndex("Nombre");
 //   file.insert();
   // file.insert();

    //file.searchByKey("Daniel","Nombre")->Imprimir();

   // fstream ar;
//    ar.open("Persona/hola.txt",ios::app);
  //  ar.close();
    //ar.close();
 /*   char d[12];
    cin >>d;
    fstream archivo;
    archivo.open("prueba",ios::binary|ios::out);
    archivo.write((char*)&d, sizeof(char)*12);
    archivo.close();

    cout << d << endl;
    archivo.open("prueba",ios::binary|ios::in);
    archivo.read((char*)&d, sizeof(char)*12);
    archivo.close();
    cout <<"luego de leer \n";
    cout << d<<endl;

*/
}


