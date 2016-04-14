/*
  Cylinder.cpp - Library for physics class tennis ball launcher
  Copyright (c) 2016 Conor Olive.  All right reserved.
*/

#define _USE_MATH_DEFINES
#include <cmath>

#include "Cylinder.h"

namespace slanga {

// Bore diameter in mm, stroke length in mm
Cylinder::Cylinder(double boreDiameter, double strokeLength,
  PistonActionType type)
{
  this->boreDiameter = boreDiameter;
  this->strokeLength = strokeLength;
  this->type = type;
}

// Pressure measured in kPa
double Cylinder::calculateForce(double pressure)
{
  return ( pressure / 1000 ) * ( M_PI / 4 ) * pow( ( boreDiameter / 1000 ), 2 );
}

// Calculates pressure in kPa needed to get given force (in N)
double Cylinder::calculateNeededPressure(double force)
{
  return ( force / ( ( M_PI / 4 ) * pow( ( boreDiameter / 1000 ), 2 ) ) ) / 1000;
}

// Calculates force (in N) needed over stroke length for given amount of Joules
double Cylinder::calculateNeededForce(double joules)
{
  return joules / ( strokeLength / 1000 );
}

} // end namespace slagna
