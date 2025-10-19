#include <iostream>
using namespace std;

int main() {
    int num;             // 입력받을 정수
    int countPos = 0;    // 양수 개수
    int countNeg = 0;    // 음수 개수
    int sum = 0;         // 합계
    int count = 0;       // 총 개수

    cout << "Enter an integer, the input ends if it is 0: ";

    while (true) {
        cin >> num;      // 정수 입력
        if (num == 0)    // 0이면 종료
            break;

        if (num > 0)
            countPos++;  // 양수 개수 증가
        else
            countNeg++;  // 음수 개수 증가

        sum += num;      // 합계 추가
        count++;         // 총 개수 증가
    }

    if (count == 0) {
        cout << "No numbers are entered except 0" << endl;
    } else {
        cout << "The number of positives is " << countPos << endl;
        cout << "The number of negatives is " << countNeg << endl;
        cout << "The total is " << sum << endl;
        cout << "The average is " << static_cast<double>(sum) / count << endl;
    }

    return 0;
}