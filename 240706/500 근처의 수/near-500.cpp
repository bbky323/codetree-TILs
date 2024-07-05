#include <iostream>
using namespace std;

int main() {
    int arr1[10], arr2[10], max, min, num, j=0, k=0;

    for(int i=0; i<10; i++){
        cin>>num;
        if(num<500){
            arr1[j]=num;
            j++;
        }
        else{
            arr2[k]=num;
            k++;
        }
    }

    max=arr1[0];
    min=arr2[0];

    for(int i=0; i<j; i++){
        if(max<arr1[i]){
            max=arr1[i];
        }
    }

    for(int i=0; i<k; i++){
        if(min>arr2[i]){
            min=arr2[i];
        }
    }

    cout<<max<<" "<<min;

    return 0;
}