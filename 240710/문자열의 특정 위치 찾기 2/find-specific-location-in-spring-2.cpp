#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[5]={"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    int cnt=0;

    cin>>c;

    for(int i=0; i<5; i++){
        for(int j=2; j<4; j++){
            if(arr[i][j]==c || arr[i][j]==c){
                cnt++;
                cout<<arr[i]<<endl;
                break;
            }
        }
    }
    cout<<cnt;
    return 0;
}