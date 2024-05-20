#include <iostream>
using namespace std;

int main() {
    int n, sum=0, pnt=0;
    cin>>n;
    for(int i=1; sum<=n; i++){
        sum+=i;
        pnt=i;
    }
    cout<<pnt;
    return 0;
}