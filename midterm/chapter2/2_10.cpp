#include <iostream>
using namespace std;

int main()
{
    double water, initialTemperature, finalTemperature;
    cout << "Enter the amount of water in kilograms: ";
    cin >> water;

    cout << "Enter the initial temperature: ";
    cin >> initialTemperature;

    cout << "Enter the final temperature: ";
    cin >> finalTemperature;

    double energy = water * (finalTemperature - initialTemperature)*4184;
    cout << "The energy needed is " << energy << endl;

    return 0;
}