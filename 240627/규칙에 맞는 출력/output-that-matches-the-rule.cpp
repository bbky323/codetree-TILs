#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    for(int i=1; i<N+1; i++){
        for(int j=0; j<i; j++){
            cout<<N+1-i+j<<" ";
        }
        cout<<""<<endl;
    }
    return 0;
}