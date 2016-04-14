/*
  Projectile.cpp - Library for physics class tennis ball launcher
  Copyright (c) 2016 Conor Olive.  All right reserved.
*/

#include "Projectile.h"

namespace slagna {

  Projectile::Projectile(double mass)
  {
    this->mass = mass;
  }

  double Projectile::calculatePotentialEnergy(double height, double gravity)
  {
    return height * gravity * mass;
  }

  double Projectile::getMass()
  {
    return mass;
  }

} // end namespace slagna
