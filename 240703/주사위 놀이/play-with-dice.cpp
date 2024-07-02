#include <iostream>
using namespace std;

int main() {
    int arr[10], cnt_arr[6]={0};
    for(int i=0; i<10; i++){
        cin>>arr[i];
        for(int j=1; j<=6; j++){
            if(arr[i]==j){
                cnt_arr[j-1]++;
            }
        }
    }
    for(int i=0; i<6; i++){
        cout<<i+1<<" - "<<cnt_arr[i]<<endl;
    }
    return 0;
}