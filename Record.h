// Created by felix on 9/23/19.
#ifndef BD2_PROYECTO1_RECORD_H
#define BD2_PROYECTO1_RECORD_H

#include <string>

using namespace std;

// CASO BODEGAS.CSV
class Record {
private:
    char bodega[30];
    char distrito[20];
    int aforo;
    int productos;
    float ventas;

public:
    Record();
    void setData();
    void showData();
    string getKey();

};


#endif //BD2_PROYECTO1_RECORD_H
