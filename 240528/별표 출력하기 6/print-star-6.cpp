#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<"  ";
        }
        for(int j=0; j<2*n-1-2*i; j++){ // 조건값을 항상 상수로 고정시켜 홀수로 만듦
            cout<<"* ";
        }
        for(int j=0; j<i; j++){
            cout<<"  ";
        }
        cout<<""<<endl;
    }
    for(int i=1; i<n; i++){
        for(int j=n-1; j>i; j--){
            cout<<"  ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"* ";
        }
        for(int j=n-1; j>i; j--){
            cout<<"  ";
        }
        cout<<""<<endl;
    }
    return 0;
}