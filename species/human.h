/**
 * Human decleration
 *
 * Copyright (c) 2021, Myo Aung.
*/
#ifndef SPECIES_HUMAN_H_
#define SPECIES_HUMAN_H_

#include "species/humanoid.h"

class Human : public Humanoid {
 public:
  Human(bool, double, double);
  bool _gender;
  bool isMale();
};

#endif  // SPECIES_HUMAN_H_
