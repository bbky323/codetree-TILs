#include <iostream>
using namespace std;

int main() {
    int n, arr[100], count_arr[9]={0,};
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        for(int j=1; j<10; j++){
            if(arr[i]==j){
                count_arr[j-1]++;
            }
        }
    }
    for(int i=0; i<9; i++){
        cout<<count_arr[i]<<endl;
    }
    
    return 0;
}