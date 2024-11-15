/*
requires PayOff3.cpp,
Random1.cpp,
SimpleMC4.cpp
Vanilla2.cpp
*/
#include<SimpleMC4.h>
#include<iostream>
using namespace std;
#include<Vanilla2.h>


int main() {
    double Expiry;
    double Strike;
    double Spot;
    double Vol;
    double r;
    unsigned long NumberOfPaths;
    cout << "\nEnter expiry\n";
    cin >> Expiry;
    cout << "\nStrike\n";
    cin >> Strike;
    cout << "\nEnter spot\n";
    cin >> Spot;
    cout << "\nEnter vol\n";
    cin >> Vol;
    cout << "\nr\n";
    cin >> r;
    cout << "\nNumber of paths\n";
    cin >> NumberOfPaths;

    PayOffCall thePayOff(Strike);
    VanillaOption theOption(thePayOff, Expiry);

    double result = SimpleMonteCarlo3(
        theOption,
        Spot,
        Vol,
        r,
        NumberOfPaths);
    cout <<"\nthe call price is " << result << "\n";

    // copy constructor (deep copy)
    VanillaOption secondOption(theOption);
    result = SimpleMonteCarlo3(
        secondOption,
        Spot,
        Vol,
        r,
        NumberOfPaths);
    cout <<"\nthe call price is " << result << "\n";

    PayOffPut otherPayOff(Strike);
    VanillaOption thirdOption(otherPayOff, Expiry);
    theOption = thirdOption;
    result = SimpleMonteCarlo3(
        theOption,
        Spot,
        Vol,
        r,
        NumberOfPaths);
    cout <<"\nthe put price is " << result << "\n";

    double tmp;
    cin >> tmp;

    return 0;
}