#include <iostream>
using namespace std;

int main() {
    int n, arr[100], cnt=0, temp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==2){
            cnt++;
            if(cnt==3){
            temp=i;
            }
        }
    }
    cout<<temp+1;
    return 0;
}