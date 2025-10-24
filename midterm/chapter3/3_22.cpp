#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cout << "Enter x1, y1, x2, y2, x3, y3, x4, y4: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    double a1 = y1-y2;
    double a2 = y3 - y4;
    double b1 = x2 - x1;
    double b2 = x4 - x3;
    double c1 = (y1 - y2)*x1 + (x2 - x1) * y1;
    double c2 = (y3 - y4) * x3 + (x4 - x3) * y3;

    double intersectingX, intersectingY;
    intersectingX = (c1*b2 - b1*c2)/(a1*b2 - a2*b1);
    intersectingY = (a1 * c2 - c1 * a2)/(a1*b2 - a2 * b1);
    if(((a1 * b2) - (a2 * b1)) == 0)
    cout << "The two lines are parallel";
    else
    cout << "The intersecting point is at (" << intersectingX << ", " << intersectingY << ")" << endl;

    return 0;

}