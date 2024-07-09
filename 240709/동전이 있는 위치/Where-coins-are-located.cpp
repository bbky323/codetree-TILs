#include <iostream>
using namespace std;

int main() {
    int n, m, r, c, arr[9][9]={};

    cin>>n>>m;
    for(int i=0; i<m; i++){
        cin>>r>>c;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==r-1 && j==c-1){
                    arr[i][j]=1;
                }
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