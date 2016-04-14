/*
  Trajectory.cpp - Library for physics class tennis ball launcher
  Copyright (c) 2016 Conor Olive.  All right reserved.
*/

#define _USE_MATH_DEFINES
#include <cmath>

#include "Trajectory.h"
#include "Projectile.h"

namespace slanga {

  Trajectory::Trajectory( double peakHeight, double range,
    double startingHeight, double gravity )
  {

    angle = atan( ( 4 * peakHeight ) / range ) * ( 180 / M_PI );
    velocity = sqrt( range * -gravity / sin( 2 * angle * ( M_PI / 180 ) ) );

  }

  double Trajectory::getAngle()
  {
    return angle;
  }

  double Trajectory::getVelocity()
  {
    return velocity;
  }

} // end namespace slanga
