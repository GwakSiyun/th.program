#include <iostream>
using namespace std;

//int라서 정수 리턴 
int main()
{
    //화씨 값 입력
    //화씨 변수로 지정
    double fahrenheit;
    cout << "Enter a degree in Fahrenheit: ";
    cin >> fahrenheit;
    //cin 으로 화씨값 받기 

    //섭씨 값 구하기
    //소수점 나올거니까 용량 좀더 큰 double로 변수 설정
    /**두 정수의 나눗셈 결과 -> 정수 이기 때문에 5/9는 결과 0으로 돼서 5.0/9 라고 해야됨!
    int()는 소수점 결과 버리고 몫만 남기는데 5/9의 몫은 0이라 0 출력
    but double은 실수 타입이라... 가능**/
    
    double celsius = (5.0 / 9) * (fahrenheit -32);

    //결과 화면 출력
    cout << "Fahrenheit" << fahrenheit << " is" << celsius << " in Celsius" << endl;

    return 0;
}
//int main() & return 0은 하나의 짝 
