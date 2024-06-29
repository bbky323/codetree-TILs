#include <iostream>
using namespace std;

int main() {
    int arr[10], sum=0;
    double mean=0, cnt=0;
    for(int i=0; i<10; i++){
        cin>>arr[i];
        if(arr[i]==0){
            break;
        }
        else{
            sum+=arr[i];
            cnt++;
        }
    }
    mean=sum/cnt;

    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<mean;

    return 0;
}