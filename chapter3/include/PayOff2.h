#ifndef PAYOFF2_H
#define PAYOFF2_H


class PayOff
{
public:
    PayOff(){};
    virtual double operator()(double Spot) const=0;
    virtual ~PayOff(){}
private:
};

class PayOffCall : public PayOff
{
public:
    PayOffCall(double Strike_);
    // Pure Virtual Function. It defines a function
    // call operator that takes a spot price (Spot)
    // as input and returns the payoff of the option.
    // The = 0 makes it pure virtual, meaning any
    // derived class must provide an implementation
    // for this function.
    virtual double operator()(double Spot) const;
    // Virtual destructor. Important for proper 
    // cleanup when dealing with polymorphism
    // (using base class pointers to derived class objects).
    virtual ~PayOffCall(){}
private:
    double Strike;
};

class PayOffPut : public PayOff
{
public:
    PayOffPut(double Strike_);
    virtual double operator()(double Spot) const;
    virtual ~PayOffPut(){}
private:
    double Strike;
};
#endif