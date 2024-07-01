#include <iostream>
using namespace std;

int main() {
    int arr[10], odd=0, even=0;
    for(int i=0; i<10; i++){
        cin>>arr[i];
        if(i%2==0){
            even+=arr[i];
        }
        else{
            odd+=arr[i];
        }
    }
    if(even>=odd){
        cout<<even-odd;
    }
    else{
        cout<<odd-even;
    }
    return 0;
}