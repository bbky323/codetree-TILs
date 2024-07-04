#include <iostream>
using namespace std;

int main() {
    int N, arr[1000], num=0, temp;

    cin>>N;

    for(int i=0; i<N; i++){
        cin>>arr[i];
    }

    for(int i=0; i<N; i++){
        for(int j=i; j<N; j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0; i<N; i++){
        if(i==0){
            if(arr[i]!=arr[i+1]){
                num=arr[i];
            }
        }
        else if(i<N-1){
            if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
                num=arr[i];
            }
        }
        else if(i==N-1){
            if(arr[i]!=arr[i-1]){
                num=arr[i];
            }
        }
        
    }

    if(num!=0){
        cout<<num;
    }
    else{
        cout<<-1;
    }
    return 0;
}