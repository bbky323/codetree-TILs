#include <iostream>
using namespace std;

int main() {
    char arr1[100];
    int arr2[100], arr3[4]={0};
    for(int i=0; i<3; i++){
        cin>>arr1[i]>>arr2[i];
        if(arr1[i]=='Y' && arr2[i]>=37){
            arr3[0]++;
        }
        else if(arr1[i]=='N' && arr2[i]>=37){
            arr3[1]++;
        }
        else if(arr1[i]=='Y' && arr2[i]<37){
            arr3[2]++;
        }
        else{
            arr3[3]++;
        }
    }
    for(int i=0; i<4; i++){
        cout<<arr3[i]<<" ";
    }
    if(arr3[0]>=2){
        cout<<'E';
    }
    return 0;
}