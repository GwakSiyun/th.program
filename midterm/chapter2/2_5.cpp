#include <iostream>
using namespace std;

int main()
{
    double subtotal;
    double gratuityRate;
    cout << "Enter the subtotal and a gratuity rate: ";
    cin >> subtotal >> gratuityRate;

    double gratuity = subtotal * gratuityRate / 100.0;
    double total = subtotal + gratuity;

    cout << "The gratuity is $" << gratuity << " and total is $" << total << endl;

    return 0;
}