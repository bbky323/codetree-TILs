#include <iostream>
using namespace std;

int main() {
    cout<<fixed;
    cout.precision(1);
    int a, b;
    cin>>a>>b;
    double mean = (a + b) / 2.0;
    cout<<a+b<<" "<<mean;
    return 0;
}