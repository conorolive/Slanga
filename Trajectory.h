/*
  Trajectory.h - Library for physics class tennis ball launcher
  Copyright (c) 2016 Conor Olive.  All right reserved.
*/

#ifndef SLANGA_TRAJECTORY_H_
#define SLANGA_TRAJECTORY_H_

namespace slanga {

class Trajectory
{

  public:

    // Constructor
    Trajectory(double peakHeight, double range, double startingHeight = 0,
      double gravity = -9.8);

    // Getter methods
    double getAngle();
    double getVelocity();

  private:

    // Peak height of trajectory in meters
    double peakHeight;

    // Range of trajectory in meters
    double range;

    // Starting height in meters where projectile no longer is accelerating
    double startingHeight;

    // Angle to launch at relative to ground in degrees
    double angle;

    // Accerlation due to gravity in the environment in m/s^2
    double gravity;

    // Velocity to launch at in m/s
    double velocity;

};

} // end namespace slanga

#endif // SLANGA_TRAJECTORY_H_
