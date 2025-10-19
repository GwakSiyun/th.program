#include <iostream>
using namespace std;

int main() {
    int num;
    int max;     // 가장 큰 수
    int count;   // max의 발생 횟수

    cout << "Enter numbers: ";
    cin >> num;

    // 첫 번째 입력이 0이면 바로 종료
    if (num == 0) {
        cout << "No numbers are entered except 0" << endl;
        return 0;
    }

    max = num;   // 첫 입력값을 최대값으로 설정
    count = 1;   // 첫 수가 1회 등장했다고 설정

    while (true) {
        cin >> num;
        if (num == 0) // 0 입력 시 종료
            break;

        if (num > max) {
            max = num;   // 더 큰 수를 발견하면 max 교체
            count = 1;   // 새 max의 등장 횟수는 1로 초기화
        }
        else if (num == max) {
            count++;     // 동일한 수면 등장 횟수 증가
        }
    }

    cout << "The largest number is " << max << endl;
    cout << "The occurrence count of the largest number is " << count << endl;

    return 0;
}