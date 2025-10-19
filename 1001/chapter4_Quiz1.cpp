/**사용자로부터 정수 5개를 입력받아 result.txt 파일에 저장하는 C++ 프로그램을 작성하시오.
파일에는 각 정수가 한 줄에 하나씩 출력 되어야 한다.
프로그램이 끝나면 "Data saved to file" 이라는 메시지를 화면에 출력한다 **/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream output;
    output.open("result.txt"); //파일쓰기 모드로 열기

    int num;
    cout << "Enter 5 integers: ";
    for (int i=0; i<5; i++){
        cin >> num;
        output << num << endl; // 파일에 쓰기
    }

    output.close(); //파일에 쓰기

    cout << "Data saved to file" << endl;
    return 0;
    }