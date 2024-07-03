#include <iostream>
using namespace std;

int main() {
    int a, b, arr[100], cnt_arr[10]={0}, i=0, sum=0;
    cin>>a>>b;
    while (true){
        arr[i]=a%b;
        for(int j=0; j<b; j++){
            if(arr[i]==j){
                cnt_arr[j]++;
            }
        }
        a/=b;
        if(a<=1){
            break;
        }
        i++;
    }
    for(int j=0; j<10; j++){
        sum+=cnt_arr[j]*cnt_arr[j];
    }
    cout<<sum;
    return 0;
}