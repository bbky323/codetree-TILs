#include <iostream>
using namespace std;

int main() {
    int n, val, arr[100];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>val;
        if(val%2==0){
            arr[i]=val;
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}