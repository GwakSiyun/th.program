#include <iostream>
using namespace std;

void t1();//함수 원형
void t2();//함수 원형

int main()
{
    t1();
    t2();

    return 0;
}

int y; //전역 변수, 기본 값은 0

void t1()
{
    int x= 1;
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
    x++;
    y++;
}

void t2()
{
    int x = 1;
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
}