#include <iostream>
using namespace std;

int main() {
    int n, cnt=0;
    while (cnt<3){
        cin>>n;
        if(n%2==0){
            cout<<n/2<<endl;
            cnt+=1;
        }
        else{
            continue;
        }
    }
    return 0;
}