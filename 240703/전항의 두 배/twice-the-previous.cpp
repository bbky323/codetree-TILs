#include <iostream>
using namespace std;

int main() {
    int num1, num2, arr[10];
    cin>>num1>>num2;
    for(int i=0; i<10; i++){
        if(i==0){
            arr[i]=num1;
            cout<<arr[i]<<" ";
        }
        else if(i==1){
            arr[i]=num2;
            cout<<arr[i]<<" ";
        }
        else{
            arr[i]=arr[i-1]+2*arr[i-2];
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}