#include <iostream>
using namespace std;

int main() {
    cout<<fixed;
    int weight = 13;
    double rate = 0.165;
    cout.precision(6);
    double multi = weight*rate;
    cout<<weight<<" * "<<rate<<" = "<<multi;
    return 0;
}