#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter a point with two coordinates: ";
    cin >> x >> y;

    if ((x * x  + y * y) <= 100)
    cout << "Point (" << x << ", " << y << ") is in the circle";
    else
    cout << "Point (" << x << ", " << y << ") is not in the circle";
    
    return 0;
}