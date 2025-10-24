#include <iostream>
using namespace std;

int main()
{
    double radius;
    double length;
    cout << "Enter the radius and length of a cylinder: ";
    cin >> radius >> length;

    double area = radius * radius * 3.14159;
    double volume = area * length;

    cout << "The area is "<< area << endl;
    cout << "The volume is " << static_cast<float>(volume) << endl;

    return 0;
}