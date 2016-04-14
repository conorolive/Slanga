/*
  Projectile.h - Library for physics class tennis ball launcher
  Copyright (c) 2016 Conor Olive.  All right reserved.
*/

#ifndef SLANGA_PROJECTILE_H_
#define SLANGA_PROJECTILE_H_

namespace slanga {

class Projectile {

  public:

    // Constructor
    Projectile(double mass);

    // Calculates potential energy (in J) of projectile at given height (in m)
    double calculatePotentialEnergy(double height, double gravity = -9.8);

	// Calculates mometum of projectile (in J) of projectile at given velocity (in m/s)
	double Projectile::calcualteMomentum(double speed);

	// Gets mass value of projectile
	double getMass();

  private:

    // Mass in kg of projectile
    double mass;

};

} // end namespace slagna

#endif
