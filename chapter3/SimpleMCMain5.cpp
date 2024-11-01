/*
requires DoubleDigital.cpp
PayOff2.cpp
Random1.cpp
SimpleMC2.cpp
*/
#include<SimpleMC2.h>
#include<DoubleDigital.h>
#include<Power.h>
#include<iostream>
using namespace std;

int main() {
    double Expiry;
    double Strike;
    double Low, Up;
    double Spot;
    double Vol;
    double r;
    unsigned long NumberOfPaths;
    int power;

    cout << "\nEnter expiry\n";
    cin >> Expiry;
    cout << "\nEnter strike\n";
    cin >> Strike;
    cout << "\nEnter low barrier\n";
    cin >> Low;
    cout << "\nEnter up barrier\n";
    cin >> Up;
    cout << "\nEnter spot\n";
    cin >> Spot;
    cout << "\nEnter vol\n";
    cin >> Vol;
    cout << "\nr\n";
    cin >> r;
    cout << "\nNumber of paths\n";
    cin >> NumberOfPaths;
    cout << "\nPower for power options\n";
    cin >> power;

    PayOffDoubleDigital thePayOff(Low, Up);
    double result = SimpleMonteCarlo2(
        thePayOff, Expiry, Spot, Vol, r, NumberOfPaths);

    cout <<"\nthe price (double) is " << result << "\n";

    PayOffPower thePayOff2(Strike, power);
    result = SimpleMonteCarlo2(
        thePayOff2, Expiry, Spot, Vol, r, NumberOfPaths);

    cout <<"\nthe price (power) is " << result << "\n";

    double tmp;
    cin >> tmp;
    return 0;
}