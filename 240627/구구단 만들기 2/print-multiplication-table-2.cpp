#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    for(int i=2; i<9; i++){
        for(int j=b; j>=a; j--){
            if(j==a){
                cout<<j<<" * "<<i<<" = "<<j*i;
            }
            else{
                cout<<j<<" * "<<i<<" = "<<j*i<<" / ";
            }
        }
        cout<<""<<endl;
        i++;
    }
    return 0;
}