#include <iostream>
#include <cmath> // M_PI 상수를 사용하기 위해 필요

using namespace std;

int main() {
    double radius = 5.5; // 반지름
    double area = M_PI * radius * radius;   // 원의 면적: π * r²
    double circumference = 2 * M_PI * radius; // 원의 둘레: 2 * π * r

    cout << "반지름: " << radius << endl;
    cout << "원의 면적: " << area << endl;
    cout << "원의 둘레: " << circumference << endl;

    return 0;
}
