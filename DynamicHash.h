// Created by felix on 9/23/19.
#ifndef BD2_PROYECTO1_DYNAMICHASH_H
#define BD2_PROYECTO1_DYNAMICHASH_H

#include <string>
#include <map>

using namespace std;

struct Bucket{};

struct EntryHash{
    int _localDepth;
    int _currentSize;
    EntryHash* nextEntryHash;

    EntryHash(int localDepth, int _size);
};

class DynamicHash {
private:
    int _globalDepth;
    int _blockFactor;
    std::map<string, EntryHash*> index;

public:
    DynamicHash(int globalDepth, int blockFactor);

    bool insert();
    bool search(int key);
};


#endif //BD2_PROYECTO1_DYNAMICHASH_H
