#include <iostream>
using namespace std;

int main() {
    int a, b, c, cnt=0;
    cin>>a>>b>>c;
    for(int i=a; i<=b; i++){
        if(i%c==0){
            cnt+=1;
        }
    }
    if(cnt!=0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}