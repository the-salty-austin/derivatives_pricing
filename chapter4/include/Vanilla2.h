#ifndef VANILLA_2_H
#define VANILLA_2_H
#include <PayOff3.h>

class VanillaOption
{
public:
    VanillaOption(const PayOff& ThePayOff_, double Expiry_);

    // Copy Constructor: creates a new VanillaOption object as a copy of an existing one.
    VanillaOption(const VanillaOption& original);

    // Assignment Operator: overloads the assignment operator (=) to allow assigning one VanillaOption object to another.
    VanillaOption& operator=(const VanillaOption& original);

    ~VanillaOption();
    
    double GetExpiry() const;
    double OptionPayOff(double Spot) const;
private:
    double Expiry;
    PayOff* ThePayOffPtr;
};
#endif