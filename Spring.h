/*
  Spring.h - Library for physics class tennis ball launcher
  Copyright (c) 2016 Conor Olive.  All right reserved.
*/

#ifndef SLANGA_SPRING_H_
#define SLANGA_SPRING_H_

namespace slanga {

class Spring {

  public:

    // Constructor
    Spring(double stiffness, double length);

    // Calculates force (in N) when spring is stretched or compressed (in m
    // from resting position)
    double calculateForce(double length);

    // Calculates distance (in m from resting position) needed to produce the
    // given force (in N)
    double calculateDistance(double force);

    double getLength();

    double getStiffness();

  private:

    // The stiffness of the spring, a.k.a. the spring constant
    double springConstant;

    // Length of spring while relaxed
    double relaxedLength;

};

} // end namespace slanga

#endif // SLANGA_SPRING_H_
