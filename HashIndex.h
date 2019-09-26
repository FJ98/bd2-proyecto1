//
// Created by daniel on 9/25/19.
//

#ifndef BD2_PROYECTO1_HASHINDEX_H
#define BD2_PROYECTO1_HASHINDEX_H

#include <bits/stdc++.h>
#include "funciones.h"
#include "Bucket.h"

using namespace std;


class HashIndex{
public:
    string path;
    int localDepth;
    string nextBucketPath;

    void save(){
    }

    void load(const string& _path){
        this->path = _path;
        this->nextBucketPath = _path + "a";
        //
    }
    void inicialize(const string& _path, int _localDepth){

        this->localDepth = _localDepth;
        fstream file;
        this -> path = _path;
        file.open(_path, ios::app | ios::out);
        nextBucketPath = NONE;
        file << _path << endl;
        file << nextBucketPath;
        file.close();
    }
    bool insert(string key, int adress){
        if (nextBucketPath == NONE){
            nextBucketPath = path + "a";
            Bucket bucket;
            bucket.inicialize(nextBucketPath,localDepth);
            bucket.insert(key, adress);
        } else{
            Bucket bucket;
            bucket.load(nextBucketPath);
            bucket.insert(key, adress);
        }
    }

    int search(string key){
        if(nextBucketPath ==NONE)
            return -1;
        else{
            Bucket bucket;
            bucket.load(nextBucketPath);
            bucket.search(key);
        }
    }



};

#endif //BD2_PROYECTO1_HASHINDEX_H
