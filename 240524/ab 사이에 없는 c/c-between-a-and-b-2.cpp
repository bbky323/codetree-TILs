#include <iostream>
using namespace std;

int main() {
    int a, b, c, check=0;
    cin>>a>>b>>c;
    for(int i=a; i<=b; i++){
        if(i%c==0){
            check=1;
        }
    }
    if(check==1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}