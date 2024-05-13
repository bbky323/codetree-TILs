#include <iostream>
using namespace std;

int main() {
    int a, b, cnt=0;
    double sum=0, mean;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(i%5==0 || i%7==0){
            sum += i;
            cnt += 1;
        }
    }
    mean = sum/cnt;
    printf("%d %0.1f\n", int(sum), mean);
    return 0;
}