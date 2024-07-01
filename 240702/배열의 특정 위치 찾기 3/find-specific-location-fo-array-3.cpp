#include <iostream>
using namespace std;

int main() {
    int arr[100], sum=0;
    for(int i=0; i<100; i++){
        cin>>arr[i];
        if(arr[i]==0){
            for(int j=0; j<i; j++){
                sum+=arr[j];
            }
            break;
        }
    }
    cout<<sum;
    return 0;
}