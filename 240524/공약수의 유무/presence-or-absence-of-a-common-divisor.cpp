#include <iostream>
using namespace std;

int main() {
    int a, b, cnt=0;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(1920%i==0 && 2880%i==0){
            cnt=1;
        }
    }
    if(cnt==1){
        cout<<cnt;
    }
    else{
        cout<<cnt;
    }
    return 0;
}