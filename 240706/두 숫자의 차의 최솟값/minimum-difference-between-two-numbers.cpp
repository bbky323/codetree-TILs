#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, arr[10], min=INT_MAX;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){
        if(min>arr[i+1]-arr[i]){
            min=arr[i+1]-arr[i];
        }
    }

    cout<<min;
    return 0;
}