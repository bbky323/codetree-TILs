#include <iostream>
using namespace std;

int main() {
    int arr[10], cnt=0;
    for(int i=0; i<10; i++){
        cin>>arr[i];
        if(arr[i]==0){
            cnt=i-1;
            break;
        }
        else{
            cnt=9;
        }
    }
    for(int i=cnt; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}