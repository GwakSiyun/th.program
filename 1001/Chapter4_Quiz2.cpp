/** student.txt 파일에는 3명의 학생 이름과 나이가 저장되어 있다 
 * 예시 파일내용 
 * Alice 23
 * Bob 21
 * Charlie 25
 * 이 파일을 읽어 3명의 정보를 출력하는 C++ 프로그램을 작성하시오
 */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input("student.txt"); //파일 열기
    if(!input) {
        cerr << "File could not be oppend." << endl;
        return 1;
    }

    string name;
    int age;

    //학생 수가 정해져 있으므로 for 문 사용
    for (int i =0; i<3; i++){
        input >> name >> age;
        cout << "Name:" << name << ", Age:" << age << endl;
    }

    input.close(); //파일 닫기
    cout << "Done" << endl;

    return 0;
}