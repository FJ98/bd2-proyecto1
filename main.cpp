#include <bits/stdc++.h>

using namespace std;

enum{ entero, flotante, doble, caracter };

class Archivo{
private:
    int start; // Para saber donde empieza la data
    int numeroDeCampos; // # de campos
    char** campo; // lista de campos
    char** tipoDeDatoCampo; // lista de los tipos de los campos
    char* fileName; // nombre del archivo
public:
    void loadFromFile(char* filename);
    void showData();

};

void Archivo::loadFromFile(char* filename) {
    this->fileName = filename;
    this->numeroDeCampos = 0;

}
void Archivo::showData() {

}


class HashFile{

};


int main() {
    std::cout << "Hello World" << std::endl;
    return 0;
}
