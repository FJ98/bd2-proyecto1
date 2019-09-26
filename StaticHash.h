// Created by daniel on 9/25/19.
#ifndef BD2_PROYECTO1_STATICHASH_H
#define BD2_PROYECTO1_STATICHASH_H

#include <bits/stdc++.h>
#include "HashIndex.h"
#include "Bucket.h"
#include "funciones.h"

#include <sys/stat.h>

using namespace std;



class StaticHash {
    int globalDepth;
    int localDepth;
    int dBit;
    string path;

public:
    bool insert(int key,int pos){
        int go = hashFunction(key,globalDepth);
        HashIndex index;
        index.load(to_string(go));
        return index.insert(to_string(key),pos);
    }
    bool insert(const string& key,int pos){
        int go = hashFunction(key,globalDepth);
        HashIndex index;
        index.load(to_string(go));
        return index.insert(key,pos);
    }


    int search(int key){
        HashIndex index;
        int go = hashFunction(key,globalDepth);
        index.load(to_string(go));
        return index.search(to_string(key));
    }

    int search(string key){
        HashIndex index;
        int go = hashFunction(key,globalDepth);
        index.load(to_string(go));
        return index.search(key);
    }

    void load(string path){
        globalDepth = 8;
        localDepth = 4;
        dBit = 3;
        this->path = path;
    }

    int inicialize(string path){

        mkdir(s_to_char(path),0777);
        dBit = 3;
        this->path = path;
        globalDepth = pow(2,dBit);
        localDepth = 4;
        for (int i = 0;i<globalDepth;i++){
            HashIndex index;
            string indexPath = path + "/" + to_string(i);
            index.inicialize(indexPath,localDepth);
        }
    }


};


#endif //BD2_PROYECTO1_STATICHASH_H
