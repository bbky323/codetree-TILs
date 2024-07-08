#include <iostream>
using namespace std;

int main() {
    int n, m, arr[100][100], num=1, temp1, temp2;

    cin>>n>>m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(n<=m){
                if(i==0 && j<n){
                    temp1=i;
                    temp2=j;
                    for(int k=0; k<=j; k++){
                        arr[temp1][temp2]=num;
                        num++;
                        temp1++;
                        temp2--;
                    }
                }
                else if(i==0 && j>=n){
                    temp1=i;
                    temp2=j;
                    for(int k=0; k<n; k++){
                        arr[temp1][temp2]=num;
                        num++;
                        temp1++;
                        temp2--;
                    }
                }
                else if(i!=0 && j==m-1){
                    temp1=i;
                    temp2=j;
                    for(int k=n-i; k>0; k--){
                        arr[temp1][temp2]=num;
                        num++;
                        temp1++;
                        temp2--;
                    }
                }
            }
            else{
                if(i==0){
                    temp1=i;
                    temp2=j;
                    for(int k=0; k<=j; k++){
                        arr[temp1][temp2]=num;
                        num++;
                        temp1++;
                        temp2--;
                    }
                }
                else if(i!=0 && j==m-1 && i<=n-m){
                    temp1=i;
                    temp2=j;
                    for(int k=0; k<m; k++){
                        arr[temp1][temp2]=num;
                        num++;
                        temp1++;
                        temp2--;
                    }
                }
                else if(i>=n-m+1 && j==m-1){
                    temp1=i;
                    temp2=j;
                    for(int k=n-i; k>0; k--){
                        arr[temp1][temp2]=num;
                        num++;
                        temp1++;
                        temp2--;
                    }
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<""<<endl;
    }
    return 0;
}