#include <bits/stdc++.h>

#include <utility>

using namespace std;

enum{ entero, flotante, doble, caracter };

class Archivo{
private:
    int startData; // Para saber donde empieza la data
    int numeroDeCampos; // # de campos
    char** campo; // lista de campos
    char** tipoDeDatoDeCampo; // lista de los tipos de los campos
    std::string fileName; // nombre del archivo
public:
    Archivo() = default;
    void loadFromFile(std::string);
    void showData();

};


void Archivo::loadFromFile(std::string filename) {
    this->fileName = std::move(filename);
    this->numeroDeCampos = 0;

    fstream inFile;
    inFile.open("PRUEBA2.bin", ios::in | ios::binary);
    if (inFile.is_open()) {
        int temp;
        inFile.read((char *) &temp, sizeof(int));
        cout << temp << endl;
        inFile.close();
    } else cout << "Could not open the index-file.\n";
}
void Archivo::showData() {

}


class HashFile{

};



int main() {
    std::cout << "Hello World" << std::endl;

     auto archivo = new Archivo;
     archivo->loadFromFile("prueba1.bin");



    return 0;
}
