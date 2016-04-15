#include <cmath>
#include "Spring.h"

namespace slanga {

Spring::Spring(double stiffness, double length)
{
  springConstant = stiffness;
  relaxedLength = length;
}

Spring::calculateForce(double length)
{
  return springConstant * ( relaxedLength + length );
}

Spring::calculateDistance(double force)
{
  return ( force / springConstant ) - relaxedLength;
}

} // end namespace slanga
