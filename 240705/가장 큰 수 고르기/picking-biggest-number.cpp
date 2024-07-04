#include <iostream>
using namespace std;

int main() {
    int arr[10], num=0;
    for(int i=0; i<10; i++){
        cin>>arr[i];
        if(num<arr[i]){
            num=arr[i];
        }
    }
    cout<<num;
    return 0;
}