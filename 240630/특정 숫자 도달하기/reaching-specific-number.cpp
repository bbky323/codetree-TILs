#include <iostream>
using namespace std;

int main() {
    int a[10], sum=0;
    double mean, cnt=0;
    for(int i=0; i<10; i++){
        cin>>a[i];
        if(a[i]>=250){
            break;
        }
        else{
            cnt++;
            sum+=a[i];
        }
    }
    mean=sum/cnt;
    printf("%d %.1f", sum, mean);
    
    return 0;
}