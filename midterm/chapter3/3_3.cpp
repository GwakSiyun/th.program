#include <iostream>
using namespace std;

int main()
{
    double a, b, c, d, e, f;
    cout << "Enter a, b, c, d, e, f: ";
    cin >> a >> b >> c >> d >> e >> f;

    double x = (e*d - b*f) / (a*d - b*c);
    double y = (a*f -e*c)/ (a*d - b*c);

    if (a*d - b*c ==0)
        cout << " The equation has no solution.";
    else
        cout << "x is " << x << " and y is " << y << endl;

    return 0;
}