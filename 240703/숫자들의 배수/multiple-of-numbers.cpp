#include <iostream>
using namespace std;

int main() {
    int n, arr[100], i=0, j=1, cnt=0;
    cin>>n;
    while(true){
        arr[i]=n*j;
        cout<<arr[i]<<" ";
        if(arr[i]%5==0){
            cnt++;
        }
        if(cnt==2){
            break;
        }
        i++;
        j++;
    }
    return 0;
}