#include <iostream>
using namespace std;

int main() {
    int n, arr[1000], max=0;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(max<arr[j]-arr[i]){
                max=arr[j]-arr[i];
            }
        }
    }

    cout<<max;

    return 0;
}