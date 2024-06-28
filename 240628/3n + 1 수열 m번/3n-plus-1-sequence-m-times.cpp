#include <iostream>
using  namespace std;

int main() {
    int n, m;
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>n;
        int cnt=0;
        while(true){
            if(n==1){
                break;
            }
            else if(n%2==0){
                n/=2;
                cnt++;
            }
            else{
                n=n*3+1;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}