#include <iostream>
using namespace std;

int main() {
    int n, arr[10][10]={}, num=1;

    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i%2==0){
                arr[n-1-j][n-1-i]=num;
                num++;
            }
            else{
                arr[j][n-1-i]=num;
                num++;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<""<<endl;
    }
    return 0;
}