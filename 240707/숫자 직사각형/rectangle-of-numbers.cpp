#include <iostream>
using namespace std;

int main() {
    int n, m, num=1;
    cin>>n>>m;

    int arr[100][100]={};

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[n][m]=num;
            cout<<arr[n][m]<<" ";
            num++;
        }
        cout<<""<<endl;
    }
    return 0;
}