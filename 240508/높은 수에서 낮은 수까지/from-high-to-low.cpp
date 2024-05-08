#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    if(a>=b){
        for(; a>=b; a--){
            cout<<a<<" ";
        }
    }
    else if(b>a){
        for(; b>=a; b--){
            cout<<b<<" ";
        }
    }
    return 0;
}