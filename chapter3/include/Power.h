#ifndef POWER_H
#define POWER_H
#include <Payoff2.h>


class PayOffPower : public PayOff {
    public:
        PayOffPower(double Strike_, double power_);
        virtual double operator()(double Spot) const;
        virtual ~PayOffPower(){}
    private:
        double Strike;
        double power;
};

#endif