#include <iostream>
using namespace std;

int main()
{
    //사용자에게 파운드로 몸무게를 입력하도록 함
    cout << "Enter weight in pounds: ";
    double weight;
    cin >> weight;

    //사용자에게 인치로 키를 입력하도록 함
    cout << "Enter height in inches: ";
    double height;
    cin >> height;

    const double KILOGRAMS_PER_POUND = 0.453592367; //상수
    const double METERS_PER_INCH = 0.0254; //상수

    //BMI 계산
    double weightinkilograms = weight * KILOGRAMS_PER_POUND;
    double heightInMeters = height * METERS_PER_INCH;
    double bmi = weightinkilograms/(heightInMeters * heightInMeters);

    //결과 화면 출력
    cout << "BMI is " << bmi << endl;
    if (bmi < 18.5)
        cout << "Underweight" << endl;
    if (bmi < 25)
        cout << "Nomal" << endl;
    else if (bmi < 30)
        cout << "overweight" << endl;
    else
        cout << "obese" << endl;

    return 0;
}
