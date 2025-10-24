#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter a point with two coordinates: ";
    cin >> x >> y;

    if ((x > -5 && x < 5) && (y > -2.5 && y < 2.5))
    cout << "Point (" << x << ", " << y <<") is in the rectangle";
    else
    cout << "Point (" << x << ", " << y << ") is not in the rectangle";

    return 0;
}