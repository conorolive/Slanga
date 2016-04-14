/*
  Cylidner.h - Library for physics class tennis ball launcher
  Copyright (c) 2016 Conor Olive.  All right reserved.
*/

#ifndef SLANGA_CYLINDER_H_
#define SLANGA_CYLINDER_H_

namespace slanga {

	enum PistonActionType {
		SINGLE,
		DOUBLE
	};

class Cylinder 
{

  public:

    // Constructor
    Cylinder(double boreDiameter, double strokeLength, PistonActionType type);

    // Calculate force exerted by pressure on piston area
    double calculateForce(double pressure);

    // Calculate pressure needed in cylinder to provide given force
    double calculateNeededPressure(double force);

    // Calculate force needed to get exert given joules across full stroke
    // length of piston
    double calculateNeededForce(double joules);

  private:

    double boreDiameter;
    double strokeLength;
    PistonActionType type;

};

} // end namespace slagna

#endif // SLANGA_CYLINDER_H_
