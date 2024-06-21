#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        if(i==0){
            for(int j=0; j<n; j++){
                cout<<"* ";
            }
            cout<<""<<endl;
        }
        else if(i==n){
            for(int j=0; j<n; j++){
                cout<<"* ";
            }
            cout<<""<<endl;
        }
        else{
            for(int j=0; j<n; j++){
                if(j<i){
                    cout<<"* ";
                }
                else if(j==n-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<""<<endl;
        }
    }
    return 0;
}