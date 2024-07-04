#include <iostream>
using namespace std;
int main() {
    int arr[100], cnt=0, N;
    cin>>N;

    for(int i=0; i<N; i++){
        cin>>arr[i];
    }

    int num=arr[0];

    for(int i=0; i<N; i++){
        if(num>arr[i]){
            num=arr[i];
        }
    }

    for(int i=0; i<N; i++){
        if(arr[i]==num){
            cnt++;
        }
    }

    cout<<num<<" "<<cnt;
    return 0;
}