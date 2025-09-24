#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()
using namespace std;

int main() {
    srand(time(0));  // 랜덤 시드 설정
    int user, computer;
    string items[3] = {"scissor", "rock", "paper"};

    cout << "scissor (0), rock (1), paper (2). 종료하려면 -1 입력" << endl;

    while (true) {
        cout << "Enter: ";
        cin >> user;

        if (user == -1) {  // 종료
            cout << "Game over." << endl;
            break;
        }

        if (user < 0 || user > 2) {  // 잘못된 입력
            cout << "Invalid input. Try again." << endl;
            continue;
        }

        computer = rand() % 3;  // 0~2 난수
        cout << "The computer is " << items[computer]
            << ". You are " << items[user] ;

        if (user == computer) {
            cout << " too. It is a draw" << endl;
        } else if ((user == 0 && computer == 2) ||
                    (user == 1 && computer == 0) ||
                    (user == 2 && computer == 1)) {
            cout << ". You won" << endl;
        } else {
            cout << ". Computer won" << endl;
        }
    }
    return 0;
}