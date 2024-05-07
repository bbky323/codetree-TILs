#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    cout << a / b << "."; // 정수 부분 출력
    int remainder = a % b;
    for (int i = 0; i < 20; i++) {
        remainder *= 10;
        cout << remainder / b; // 각 자리의 소수를 출력
        remainder %= b;
    }
    return 0;
}