#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()
using namespace std;

int main() {
    int choice;
    srand(time(0)); // 랜덤 시드 설정

    while (true) {
        cout << "Main menu\n";
        cout << "1: Addition\n";
        cout << "2: Subtraction\n";
        cout << "3: Multiplication\n";
        cout << "4: Division\n";
        cout << "5: Exit\n";
        cout << "Enter a choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting program..." << endl;
            break;
        }

        int number1 = rand() % 10;  // 0~9 사이
        int number2 = rand() % 10;  // 0~9 사이
        int answer;

        // 각 연산별 조건 처리
        switch (choice) {
        case 1: // Addition
            cout << "What is " << number1 << " + " << number2 << "? ";
            cin >> answer;
            if (answer == number1 + number2)
                cout << "Correct\n\n";
            else
                cout << "Your answer is wrong. The correct answer is "
                    << number1 + number2 << "\n\n";
            break;

        case 2: // Subtraction
            if (number1 < number2) swap(number1, number2); // 음수 방지
            cout << "What is " << number1 << " - " << number2 << "? ";
            cin >> answer;
            if (answer == number1 - number2)
                cout << "Correct\n\n";
            else
                cout << "Your answer is wrong. The correct answer is "
                    << number1 - number2 << "\n\n";
            break;

        case 3: // Multiplication
            cout << "What is " << number1 << " * " << number2 << "? ";
            cin >> answer;
            if (answer == number1 * number2)
                cout << "Correct\n\n";
            else
                cout << "Your answer is wrong. The correct answer is "
                     << number1 * number2 << "\n\n";
            break;

        case 4: // Division
            while (number2 == 0) // 0으로 나누기 방지
                number2 = rand() % 10;

            cout << "What is " << number1 << " / " << number2 << "? ";
            cin >> answer;
            if (answer == number1 / number2) // 정수 나눗셈
                cout << "Correct\n\n";
            else
                cout << "Your answer is wrong. The correct answer is "
                    << number1 / number2 << "\n\n";
            break;

        default:
            cout << "Invalid choice. Please enter 1~5.\n\n";
        }
    }

    return 0;
}