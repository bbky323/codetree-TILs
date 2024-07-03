#include <iostream>
using namespace std;

int main() {
    int n, q, arr1[100], arr2[3]={0};
    cin>>n>>q;
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<q; i++){
        cin>>arr2[0];
        if(arr2[0]==1){
            cin>>arr2[1];
            cout<<arr1[arr2[1]-1]<<endl;
        }
        else if(arr2[0]==2){
            cin>>arr2[1];
            int find_num=-1;
            for(int j=0; j<n; j++){
                if(arr1[j]==arr2[1]){
                    find_num=j+1;
                    cout<<find_num<<endl;
                    break;
                }
            }
            if(find_num==-1){
                cout<<0<<endl;
            }
        }
        else if(arr2[0]==3){
            cin>>arr2[1]>>arr2[2];
            for(int i=arr2[1]; i<=arr2[2]; i++){
                cout<<arr1[i-1]<<" ";
            }
            cout<<""<<endl;
        }
    }
    return 0;
}