#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<20; i++){
        for(int j=1; j<20; j++){
            if(j==19 || j%2==0){
                cout<<i<<" * "<<j<<" = "<<i*j<<endl;
            }
            else{
                cout<<i<<" * "<<j<<" = "<<i*j<<" / ";
            }          
        }
    }
    return 0;
}