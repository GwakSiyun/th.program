#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a poin with two coordinates: ";
    int x, y ;
    cin >> x >> y ;

    int distanceSquared = x * x + y * y;

    if (distanceSquared <= 100) {
        cout << "Point (" << x<<", "<< y << ") is in the circle."<< endl;
    } else {
        cout << "Point ("<< x <<", "<< y <<") is not in the circle." << endl;
    }

    return 0;
}