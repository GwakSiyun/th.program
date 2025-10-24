#include <iostream>
using namespace std;

int main ()
{
    int number, a, b, c;
    cout << "Enter a number between 0 and 1000 : ";
    cin >> number;

    c = number % 10;
    b = number / 10;
    a = c + (b % 10) + (b /10);
    cout << "The sum of the digits is " << a << endl;

    return 0;
}