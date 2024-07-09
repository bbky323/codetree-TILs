#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, str3;
    int arr[3], temp=0;

    cin>>str1;
    cin>>str2;
    cin>>str3;

    arr[0]=str1.length();
    arr[1]=str2.length();
    arr[2]=str3.length();

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<arr[0]-arr[2];
    return 0;
}