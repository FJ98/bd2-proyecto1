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
    HeaderFile header;
    header.load("bd/Animal/Animal.header");
    header.print();

   // fstream ar;
//    ar.open("Persona/hola.txt",ios::app);
  //  ar.close();
    //ar.close();
}


