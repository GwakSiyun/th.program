#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int minutes, years, days;
    cout << "Enter the number of minutes: ";
    cin >> minutes;

    years = minutes / (60 * 24 * 365);
    days = (minutes % (60*24*365)) / (24 * 60);

    cout << minutes << " minutes is approximately " << years << " years and " << days << " days" << endl;

    return 0;
}