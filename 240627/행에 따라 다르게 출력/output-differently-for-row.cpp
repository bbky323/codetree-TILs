#include <iostream>
using namespace std;

int main() {
    int n, cnt=0;
    cin>>n;
    for(int i=1; i<n+1; i++){
        if(i%2!=0){
            for(int j=0; j<n; j++){
                cnt++;
                cout<<cnt<<" ";
            }
            cout<<""<<endl;
        }
        else{
            for(int j=0; j<n; j++){
                cnt+=2;
                cout<<cnt<<" ";
            }
            cout<<""<<endl;
        }
    }
    return 0;
}