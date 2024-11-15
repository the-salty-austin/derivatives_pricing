#ifndef SIMPLEMC4a_H
#define SIMPLEMC4a_H
#include <Vanilla3.h>

double SimpleMonteCarlo4a(
    const VanillaOption3& TheOption,
    double Spot,
    double Vol,
    double r,
    unsigned long NumberOfPaths);

#endif