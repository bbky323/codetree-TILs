#include <iostream>
using namespace std;

int main() {
    int n, count=0;
    cin>>n;
    for(int i = 1; i<=500; i++){
        if (i%n==0){
            cout<<i<<" ";
            count += 1;
        }
        if(count == 5){
            break;
        }

    }
    return 0;
}