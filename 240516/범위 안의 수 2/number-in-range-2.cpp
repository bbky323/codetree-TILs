#include <iostream>
using namespace std;

int main() {
    int num, cnt=0;
    double sum=0, mean=0;
    for(int i=0; i<10; i++){
        cin>>num;
        if(num>=0 && num<=200){
            sum += num;
            cnt += 1;
        }
    }
    mean = sum/cnt;
    printf("%d %0.1f\n", int(sum), mean);
    return 0;
}