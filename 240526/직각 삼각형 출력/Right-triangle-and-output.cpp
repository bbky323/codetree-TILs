#include <iostream>
using namespace std;

int main() {
    int n, k=0;;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=k; j++){
                cout<<"*";
        }
        cout<<""<<endl;
        k+=2;
    }
    return 0;
}