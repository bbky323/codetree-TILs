#include <iostream>
using namespace std;

int main() {
    int n;
    char cnt ='A';
    cin>>n;
    for(int i=1; i<n+1; i++){
        for(int j=0; j<i; j++){
            cout<<cnt;
            cnt++;
            if(cnt>'Z'){
                cnt='A';
            }
        }
        cout<<""<<endl;
    }
    return 0;
}