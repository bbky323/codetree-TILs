#include <iostream>
using namespace std;

int main() {
    int n, num;
    double sum=0, mean=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>num;
        sum += num;
    }
    mean = sum/n;
    printf("%d %0.1f\n", int(sum), mean);
    return 0;
}