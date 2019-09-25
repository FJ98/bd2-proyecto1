#include <bits/stdc++.h>
#include "record.h"
#include "archivo.h"
#include <dirent.h>
#include <sys/stat.h>  //for creating directories
#include <fstream>
#include "manager.h"

using namespace std;


class HashFile{

};



int main() {
 
    Manager s;
    s.inicializar();
    //string s = "12";

    //cout << stoi(s);
    //cout << s.size();

    Archivo file ;
    //string file = "Persona";
    file.createTable("Persona");
    file.createTable("Animal");
   // fstream ar;
//    ar.open("Persona/hola.txt",ios::app);
  //  ar.close();
    //ar.close();
}


