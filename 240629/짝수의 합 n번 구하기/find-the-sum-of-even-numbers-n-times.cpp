#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin>>n;
    for(int i=0; i<n; i++){
        int sum=0;
        cin>>a>>b;
        for(int i=a; i<=b; i++){
            if(i%2==0){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}