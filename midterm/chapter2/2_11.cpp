#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double secondsPerYear = 365 * 24 * 60 * 60;
    double currentPopulation = 312032486;

    int years;
    cout << "Enter the number of years: ";
    cin >> years;

    double birthsPerYear = (secondsPerYear / 7.0)*years;
    double deathsPerYear = (secondsPerYear / 13.0)*years;
    double immigrantsPerYear = (secondsPerYear / 45.0)*years;

    currentPopulation = currentPopulation + birthsPerYear + immigrantsPerYear - deathsPerYear;
    
    cout << "The po;ulation in " << years << " years is " << static_cast<int>(round(currentPopulation)) << endl;

    return 0;
}

