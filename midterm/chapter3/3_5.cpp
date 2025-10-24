#include <iostream>
using namespace std;

int main()
{
    int day, elapsed;
    cout << "Enter today's day: ";
    cin >> day;

    cout << "Enter the number of days elapsed since today: ";
    cin >> elapsed;

    int futureDay = (day + elapsed) % 7;

    cout << "Today is ";

    switch (day)
    {
        case 0: cout << "Sunday"; break;
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
    }

    cout << " and the future day is ";

    switch (futureDay)
    {
        case 0: cout << "Sunday"; break;
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
    }

    cout << endl;

    return 0;
}