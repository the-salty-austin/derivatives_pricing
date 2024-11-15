#ifndef PAYOFFBRIDGE_H
#define PAYOFFBRIDGE_H
#include<PayOff3.h>

class PayOffBridge {
public:
    // The PayOffBridge class has two constructors
    // to provide flexibility in how you create PayOffBridge objects.
    PayOffBridge(const PayOffBridge& original);
    PayOffBridge(const PayOff& innerPayOff);
    inline double operator()(double Spot) const;
    ~PayOffBridge();
    PayOffBridge& operator=(const PayOffBridge& original);
private:
    PayOff* ThePayOffPtr;
};

inline double PayOffBridge::operator()(double Spot) const {
    return ThePayOffPtr->operator ()(Spot);
}

#endif