#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            for(int k=i; k<n; k++){
                cout<<"*";
            }
            cout<<" ";
        }
        cout<<""<<endl;
    }
    return 0;
}