#include <iostream>
using namespace std;

int main() {
    int arr[100], score_arr[10]={0};
    for(int i=0; i<100; i++){
        cin>>arr[i];
        if(arr[i]==0){
            break;
        }
        for(int j=1; j<=10; j++){
            if(arr[i]/10==j){
                score_arr[j-1]++;
            }
        }
    }
    for(int i=10; i>0; i--){
        cout<<i*10<<" - "<<score_arr[i-1]<<endl;
    }
    return 0;
}