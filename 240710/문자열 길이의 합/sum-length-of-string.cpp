#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, cnt1=0, cnt2=0;
    string arr[10];

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i][0]=='a'){
            cnt2++;
        }
        for(int j=0; j<arr[i].length(); j++){
            cnt1++;
        }
    }

    cout<<cnt1<<" "<<cnt2;
    return 0;
}