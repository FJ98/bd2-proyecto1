//
// Created by daniel on 9/25/19.
//

#ifndef BD2_PROYECTO1_HASHINDEX_H
#define BD2_PROYECTO1_HASHINDEX_H

#include <bits/stdc++.h>
#include "funciones.h"
#include "Bucket .h"

using namespace std;


class HashIndex{
    string path;
    string nextBucketPath;

    void save(){
    }

    void load(string path){
        this->path = path;
        this->nextBucketPath = path + "a";
        //
    }
    void inicialize(string path){
        fstream file;
        this -> path = path;
        file.open(path,ios::app|ios::out);
        nextBucketPath = NONE;
        file << path <<endl;
        file << nextBucketPath;
        file.close();
    }
    void insert(int key){
        if (nextBucketPath == NONE){
            nextBucketPath = path + "a";

        } else{
            Bucket bucket;
            bucket.inicialize(nextBucketPath);
            bucket.insert(key);
        }

    }

};

#endif //BD2_PROYECTO1_HASHINDEX_H
