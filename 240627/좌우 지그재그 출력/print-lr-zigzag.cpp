#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1; i<n+1; i++){
        if(i%2!=0){
            for(int j=n-1; j>=0; j--){
                cout<<i*n-j<<" ";
            }
            cout<<""<<endl;
        }
        else{
            for(int j=0; j<n; j++){
                cout<<i*n-j<<" ";
            }
            cout<<""<<endl;
        }
        
    }
    return 0;
}