#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1; i<n+1; i++){
        for(int j=i; j<n+i; j++){
            cout<<2*j+9<<" ";
        }
        cout<<""<<endl;
    }
    return 0;
}