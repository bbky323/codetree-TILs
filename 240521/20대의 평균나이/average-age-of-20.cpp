#include <iostream>
using namespace std;

int main() {
    int age, cnt=0;
    double mean, sum=0;
    while(true){
        cin>>age;
        if (age<20 || age>29){
            break;
        }
        else{
            sum+=age;
            cnt+=1;
            mean=sum/cnt;
        }
    }
    printf("%0.2f", mean);
    return 0;
}