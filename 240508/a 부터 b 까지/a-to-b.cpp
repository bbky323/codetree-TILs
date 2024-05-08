#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    for(; a<=b; a++){
        cout<<a<<" ";
        if(a%2!=0){
            a*=2;
            a-=1;
        }
        else{
            a+=2;
        }
    }
    return 0;
}