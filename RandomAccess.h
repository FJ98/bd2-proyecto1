// Created by felix on 9/23/19.
#ifndef BD2_PROYECTO1_RANDOMACCESS_H
#define BD2_PROYECTO1_RANDOMACCESS_H

#include <string>
#include <map>
#include "Record.h"

using namespace std;

template <typename T>
class RandomAccess {
private:
    std::string _fileName;
    std::string _indexName;
    std::map<std::string,long> index;

public:
    explicit RandomAccess(std::string fileName);
    bool insert(Record obj);
    bool search(T key);

};




#endif //BD2_PROYECTO1_RANDOMACCESS_H
