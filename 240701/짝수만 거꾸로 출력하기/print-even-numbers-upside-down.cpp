#include <iostream>
using namespace std;

int main() {
    int n, arr1[100], arr2[100], cnt=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr1[i];
        if(arr1[i]%2==0){
            arr2[cnt]=arr1[i];
            cnt++;
        }
    }
    for(int j=cnt-1; j>=0; j--){
        cout<<arr2[j]<<" ";
    }
    return 0;
}