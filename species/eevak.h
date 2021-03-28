/**
 * Eevak declaration
 *
 * Copyright (c) 2021, Myo Aung.
*/
#ifndef SPECIES_EEVAK_H_
#define SPECIES_EEVAK_H_

#include "species/humanoid.h"

class Eevak {  //  : public Humanoid {
 private:
  bool _isRunning;

 public:
  Eevak();
  void run();
  void stop();
  bool isRunning();
};
#endif  // SPECIES_EEVAK_H_
