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
        else{
            for(int j=0; j<n; j++){
                if(j%2==0){
                    cout<<"  ";
                }
                else{
                    if(j>=i){
                        cout<<"* ";
                    }
                    else{
                        cout<<"  ";
                    }
                }
            }
            cout<<""<<endl;
        }
        
    }
    return 0;
}