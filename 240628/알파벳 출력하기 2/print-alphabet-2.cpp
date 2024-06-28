#include <iostream>
using namespace std;

int main() {
    int N;
    char cnt = 'A';
    cin>>N;
    for(int i=0; i<N; i++){
        for(int j=0; j<i; j++){
            cout<<"  ";
        }
        for(int j=N; j>i; j--){
            cout<<cnt<<" ";
            cnt++;
            if(cnt>'Z'){
                cnt='A';
            }
        }
        cout<<""<<endl;
    }
    return 0;
}