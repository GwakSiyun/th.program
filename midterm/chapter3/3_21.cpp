#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    
    int card = rand() % 4;
    int num = rand() % 13;
    
    cout << "The card you picked is ";

    switch(num)
    {
        case 0: cout << "Ace";break;
        case 1: cout << "2";break;
        case 2: cout << "3";break;
        case 3: cout << "4";break;
        case 4: cout << "5";break;
        case 5: cout << "6";break;
        case 6: cout << "7";break;
        case 7: cout << "8";break;
        case 8: cout << "9";break;
        case 9: cout << "10";break;
        case 10: cout << "Jack";break;
        case 11: cout << "Queen";break;
        case 12: cout << "King";break;
    }

    cout << " of ";

    switch(card)
    {
        case 0 : cout << "Club"; break;
        case 1 : cout << "Diamond"; break;
        case 2 : cout << "Heart"; break;
        case 3 : cout << "Spade"; break;
    }
    
    return 0;
}