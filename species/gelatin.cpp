/**
 * Keyword gelatin.cpp
 *
 * Copyright (c) 2021, Myo Aung.
*/

#include "species/gelatin.h"
#include <cstring>

int _idgen = 10;
Gelatin::Gelatin() {
    _weight = 0;
    _shape = new char[6];
    _id = ++_idgen;
}
Gelatin::Gelatin(double w) {
    _weight = w;
    _shape = new char[6];
    strcpy(_shape , "sphere");
    _id = ++_idgen;
}

double Gelatin::weight() {
    return _weight;
}
char* Gelatin::shape() {
    return _shape;
}
void Gelatin::morph() {
    strcpy(_shape , "sphere");
}


void Gelatin::morph(const char* s) {
    if (strcmp(s, "flat") == 0) {
        strcpy(_shape , "flat");
    }
    else if (strcmp(s, "sphere") == 0) {
        strcpy(_shape , "sphere");
    }
}
Gelatin Gelatin::split() {
    Gelatin n(_weight/2);
    n.morph(_shape);
    this->_weight = _weight/2;
    return n;
}
bool operator != (const Gelatin &n, const Gelatin &o) {
    return n._id != o._id;
}
