#include <iostream>
using namespace std;

int main() {
    double product = 1.0; // 곱의 결과를 저장할 변수

    for (int i = 1; i <= 97; i += 2) { // 1, 3, 5, ..., 97까지
        product *= static_cast<double>(i) / (i + 2);
    }

    cout << "The product is " << product << endl;

    return 0;
}