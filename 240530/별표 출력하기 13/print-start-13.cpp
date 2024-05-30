#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=0; j<n-i/2; j++){
                cout<<"* ";
            }
            cout<<""<<endl;
        }
        else{
            for(int j=0; j<=i/2; j++){
                cout<<"* ";
            }
            cout<<""<<endl;
        }
    }
    for(int i=0; i<n; i++){
        if(n%2==0){
            if(i%2==0){//감소
                for(int j=0; j<n/2-i/2; j++){
                    cout<<"";
                }
                cout<<""<<endl;
            }
            else{//증가
                for(int j=0; j<=n/2+i/2; j++){
                    cout<<"* ";
                }
                cout<<""<<endl;
            }
        }
        else{
            if(i%2==0){//증가
                for(int j=0; j<=n/2+i/2; j++){
                    cout<<"* ";
                }
                cout<<""<<endl;
            }
            else{//감소
                for(int j=0; j<n/2-i/2; j++){
                    cout<<"* ";
                }
                cout<<""<<endl;
            }
        }
    }
    return 0;
}