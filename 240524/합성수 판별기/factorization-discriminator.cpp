#include <iostream>
using namespace std;

int main() {
    int n, cnt=0;
    cin>>n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt==0){
        cout<<'N';
    }
    else{
        cout<<'C';
    }
    return 0;
}