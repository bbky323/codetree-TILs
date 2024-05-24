#include <iostream>
using namespace std;

int main() {
    int n, check=0;
    cin>>n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            check=1;
        }
    }
    if(check==1){
        cout<<'C';
    }
    else{
        cout<<'P';
    }
    return 0;
}