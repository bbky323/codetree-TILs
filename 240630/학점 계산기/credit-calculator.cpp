#include <iostream>
using namespace std;

int main() {
    int n;
    double arr[100], sum=0, mean=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    mean=sum/n;
    printf("%.1f\n", mean);
    if(mean>=4.0){
        printf("Perfect");
    }
    else if(mean>=3.0){
        printf("Good");
    }
    else{
        printf("poor");
    }
    return 0;
}