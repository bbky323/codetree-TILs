#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin>>n1>>n2;
    for(int i=1; i<n1+1; i++){
        for(int j=1; j<n2+1; j++){
            cout<<j*i<<" ";
        }
        cout<<""<<endl;
    }
    return 0;
}