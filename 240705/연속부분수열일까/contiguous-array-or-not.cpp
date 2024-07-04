#include <iostream>
using namespace std;

int main() {
    int A[100], B[100], n1, n2, res=0;
    cin>>n1>>n2;
    for(int i=0; i<n1; i++){
        cin>>A[i];
    }
    for(int i=0; i<n2; i++){
        cin>>B[i];
    }
    if(n1<n2){
        cout<<"No";
    }
    else{
        for(int i=0; i<n1-n2+1; i++){ // 첫째 인덱스가 같은지 확인하는 반복문
            int cnt=0;
            if(A[i]==B[0]){
                for(int j=1; j<n2; j++){
                    if(A[i+j]==B[j]){
                        cnt++;
                    }
                }
            }
            if(cnt==n2-1){
                res=cnt;
                break;
            }
        }
        if(res==n2-1){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }
    
    return 0;
}