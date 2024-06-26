#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1; i<n+1; i++){               
        for(int j=0; j<n; j++){
            if(j%2==0){
                cout<<i;
            }
            else{
                cout<<n+1-i;
            }
        }
        cout<<""<<endl;
    }
    return 0;
}