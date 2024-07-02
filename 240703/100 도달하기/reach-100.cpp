#include <iostream>
using namespace std;

int main() {
    int n, arr[100], i=0;
    cin>>n;
    while(true){
        if(i==0){
            arr[i]=1;
            cout<<arr[i]<<" ";
        }
        else if(i==1){
            arr[i]=n;
            cout<<arr[i]<<" ";
        }
        else{
            arr[i]=arr[i-2]+arr[i-1];
            cout<<arr[i]<<" ";
        }
        if(arr[i]>100){
            break;
        }
        i++;
    }
    return 0;
}