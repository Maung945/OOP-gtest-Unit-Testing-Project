/**
 * Kaylon declaration
 *
 * Copyright (c) 2021, Myo Aung.
*/

#ifndef SPECIES_KAYLON_H_
#define SPECIES_KAYLON_H_

#include "species/humanoid.h"

class Kaylon: public Humanoid {
    double _height;
    double _weight;
    bool _firing;
    
 public:
    Kaylon();
    Kaylon(double h, double w);
    double height();
    double weight();
    bool isFiring();
    void startFiring();
    void stopFiring();
};

#endif  // SPECIES_KAYLON_H_
