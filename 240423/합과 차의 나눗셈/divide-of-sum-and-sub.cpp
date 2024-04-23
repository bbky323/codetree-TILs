#include <iostream>
using namespace std;

int main() {
    cout<<fixed;
    double a, b;
    cin>>a>>b;
    cout.precision(2);
    double num1 = (a+b)/(a-b);
    cout<<num1;
    return 0;
}