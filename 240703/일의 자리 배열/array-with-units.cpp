#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for(int i=0; i<2; i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    for(int i=2; i<10; i++){
        arr[i]=(arr[i-1]+arr[i-2])%10;
        cout<<arr[i]<<" ";
    }
    return 0;
}