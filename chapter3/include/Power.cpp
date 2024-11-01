#include <Power.h>
#include <cmath>
using namespace std;

PayOffPower::PayOffPower(double Strike_, double power_) :
    Strike(Strike_),
    power(power_)
{
}

double PayOffPower::operator()(double Spot) const {
    if (Spot >= Strike) {
        return pow((Spot - Strike), power);
    }
    return 0;
}