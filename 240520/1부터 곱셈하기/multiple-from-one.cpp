#include <iostream>
using namespace std;

int main() {
    int n, mul=1, num;
    cin>>n;
    for(int i=1; i<=10; i++){
        if(mul<n){
            mul*=i;
            num=i;
            continue;
        }
        break;
    }
    cout<<num;
    return 0;
}