#include <iostream>
using namespace std;

int main() {
    int arr[10], sum1=0;
    double mean=0, sum2=0;
    for(int i=0; i<10; i++){
        cin>>arr[i];
        if(i%2==1){
            sum1+=arr[i];
        }
    }
    sum2=arr[2]+arr[5]+arr[8];
    mean=sum2/3;

    cout<<fixed;
    cout.precision(1);
    cout<<sum1<<" "<<mean;
    return 0;
}