#include <iostream>
using namespace std;

int main() {
    int N, cnt=0;
    cin>>N;
    while(N!=1){
        if(N%2==0){
            N/=2;
            cnt+=1;
        }
        else{
            N=N*3+1;
            cnt+=1;
        }
    }
    cout<<cnt;
    return 0;
}