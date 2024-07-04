#include <iostream>
using namespace std;

int main() {
    int N, arr[100], temp;

    cin>>N;

    for(int i=0; i<N; i++){
        cin>>arr[i];
    }

    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout<<arr[0]<<" "<<arr[1];

    return 0;
}