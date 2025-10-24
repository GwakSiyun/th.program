#include <iostream>
using namespace std;

int main()
{
    int secondsPerYear = 365 * 24 * 60 * 60;
    int currentPopulation = 312032486;

    int birthsPerYear = secondsPerYear / 7;
    int deathsPerYear = secondsPerYear / 13;
    int immigrantsPerYear = secondsPerYear / 45;

    currentPopulation = currentPopulation + birthsPerYear + immigrantsPerYear - deathsPerYear;
    
    for (int year = 1; year <= 5; year++) {
    currentPopulation = currentPopulation + birthsPerYear + immigrantsPerYear - deathsPerYear;
    cout << "The population in year " << year << " is " << currentPopulation << endl;

    return 0;
}
}
