#include <iostream>
using namespace std;

int main() {
    int arr[100], i=0;

    while (true){
        cin>>arr[i];
        if(arr[i]==-999 || arr[i]==999){
            break;
        }
        i++;
    }

    int min=arr[0];
    int max=arr[0];

    for(int j=0; j<i; j++){
        if(arr[j]>max){
            max=arr[j];
        }
        if(arr[j]<min){
            min=arr[j];
        }
    }

    cout<<max<<" "<<min;
    return 0;
}