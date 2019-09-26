//
// Created by daniel on 9/25/19.
//

#ifndef BD2_PROYECTO1_BUCKET_H
#define BD2_PROYECTO1_BUCKET_H
#include <bits/stdc++.h>
#include "funciones.h"

using namespace std;

class Bucket{
public:
    int localDepth;
    int currentDepth;
    int* keys;
    int* keyAdress;
    string nextBucketPath;
    string path;

    void load(string path){
        fstream file;
        file.open(path,ios::in);
        if(file.is_open()){
            keys = new int[localDepth];
            this->path = path;
            string s;
            getline(file,s);
            localDepth = stoi(s);
            getline(file,s);
            currentDepth = stoi(s);
            for(int i=0;i<currentDepth;i++){
                   getline(file,s);
                   keys[i] = stoi(s);
                   getline(file,s);
                   keyAdress[i] = stoi(s);
            }
        } else{
            cout << "coudnt open the file"<<endl;
        }
    }

    void save(){
        fstream file;
        file.open(path,ios::out);
        if(file.is_open()){
            file << localDepth<<endl;
            file << currentDepth<<endl;
            for(int i = 0;i<currentDepth;i++){
                file << keys[i]<<endl;
                file<<keyAdress[i]<<endl;
            }

        } else{
            cout << "coudnt save file"<<endl;
        }

    }

    void insert(int key){
        if(!find(key)){
            if(currentDepth < localDepth){
                keys[currentDepth] = key;
                currentDepth++;
                save();
            } else{
                nextBucketPath = path + "a";
                Bucket newBucket;
                if(nextBucketPath ==NONE){
                    newBucket.inicialize(nextBucketPath,localDepth);
                    newBucket.insert(key);
                } else{
                    newBucket.load(nextBucketPath);
                    newBucket.insert(key);
                }
            }

        }
    }

    bool find(int key){
        if (currentDepth == 0)
            return false;
        else{
            for(int i=0;i<currentDepth;i++){
                if(keys[i]==key)
                    return true;
            }
        }
        return false;
        //retorna si la key está en el backet
    }

    void inicialize(string path,int localDepth){
        //cread el bucket
        fstream file;
        this->localDepth = localDepth;
        this->currentDepth = 0;
        this -> path = path;
        this->nextBucketPath = NONE;
        file.open(path,ios::app|ios::out);
        file << path <<endl;
        file << nextBucketPath<<endl;
        file << localDepth << endl;
        file << currentDepth<<endl;
        file.close();
    }
};




#endif //BD2_PROYECTO1_BUCKET_H
