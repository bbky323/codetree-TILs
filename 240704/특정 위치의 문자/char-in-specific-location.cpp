#include <iostream>
using namespace std;

int main() {
    char arr[6]={'L', 'E', 'B', 'R', 'O', 'S'}, n;
    int cnt=-1;
    cin>>n;
    for(int i=0; i<6; i++){
        if(n==arr[i]){
            cnt=i;
            cout<<i;
        }
    }
    if(cnt==-1){
            cout<<"None";
        }
    return 0;
}