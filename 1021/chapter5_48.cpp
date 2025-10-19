#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, str); // 공백 포함 입력받기

    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) // 대문자인지 확인
            count++;
    }

    cout << "The number of uppercase letters is " << count << endl;

    return 0;
}