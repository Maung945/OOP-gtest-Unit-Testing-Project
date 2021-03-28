/**
 * Keyword moclan.cpp
 *
 * Copyright (c) 2021, Myo Aung.
*/

#ifndef SPECIES_MOCLAN_H_
#define SPECIES_MOCLAN_H_

#include "species/humanoid.h"

class Moclan :public Humanoid {
    double _height;
    double _weight;
    bool _egg;

 public:
    Moclan();
    Moclan(double h, double w);
    double height();
    double weight();
    Moclan layEgg();
    void hatch();
    bool isEgg();
};

#endif  // SPECIES_MOCLAN_H_

