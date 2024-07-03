#include <iostream>
using namespace std;

int main() {
    int n, arr[100], ten_arr[9]={0};
    for(int i=0; i<100; i++){
        cin>>arr[i];
        if (arr[i]==0){
            break;
        }
        for(int j=1; j<10; j++){
            if(arr[i]/10==j){
                ten_arr[j-1]++;
            }
        }
    }
    for(int i=0; i<9; i++){
        cout<<i+1<<" - "<<ten_arr[i]<<endl;
    }
    return 0;
}