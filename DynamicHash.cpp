// Created by felix on 9/23/19.
#include "DynamicHash.h"

EntryHash::EntryHash(int localDepth, int _size): _localDepth{localDepth}, _currentSize{_size}, nextEntryHash{nullptr} {}

DynamicHash::DynamicHash(int globalDepth, int blockFactor) : _globalDepth{globalDepth}, _blockFactor{blockFactor} {}

bool DynamicHash::insert() {

    return false;
}

bool DynamicHash::search(int key) {

    return false;
}
