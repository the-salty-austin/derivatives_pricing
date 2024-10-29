#include <PayOff1.h>
#include <MinMax.h>
#include <algorithm>
using namespace std;

PayOff::PayOff(double Strike_, OptionType TheOptionsType_)
:
Strike(Strike_), TheOptionsType(TheOptionsType_)
{
}

// override operator() ==> To create a functor
// acts just like a function.
double PayOff::operator ()(double spot) const
{
    switch (TheOptionsType) {
        case call :
            return max(spot-Strike,0.0);
        case put:
            return max(Strike-spot,0.0);
        case digitalcall:
            // not follwing open–closed principle.
            // this will lead to endless modification if we add more types
            return (spot > Strike ? 1.0 : 0.0);
        default:
            throw("unknown option type found.");
    }
}