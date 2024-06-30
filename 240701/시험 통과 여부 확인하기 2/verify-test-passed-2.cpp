#include <iostream>
using namespace std;

int main() {
    int n, arr[4], cnt2=0;
    cin>>n;
    for(int i=0; i<n; i++){
        int cnt1=0;
        double sum=0, mean=0;
        for(int j=0; j<4; j++){
            cin>>arr[i];
            sum+=arr[i];
            cnt1++;
        }
        mean=sum/cnt1;
        if(mean>=60){
            cout<<"pass"<<endl;
            cnt2++;
        }
        else{
            cout<<"fail"<<endl;
        }
    }
    cout<<cnt2;
    return 0;
}