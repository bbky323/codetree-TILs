#include <iostream>
using namespace std;

int main() {
    int arr[100], sum=0;
    for(int i=0; i<100; i++){
        cin>>arr[i];
        if(arr[i]==0){
            break;
        }
        sum=arr[i]+arr[i-1]+arr[i-2];
    }
    cout<<sum;
    return 0;
}