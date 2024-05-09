#include <iostream>
using namespace std;

int main() {
    int num, cnt1=0, cnt2=0;
    for(int i=0; i<10; i++){
        cin>>num;
        if(num%3==0){
            cnt1+=1;
        }
        if(num%5==0){
            cnt2+=1;
        }
    }
    cout<<cnt1<<" "<<cnt2;
    return 0;
}