#include <iostream>
using namespace std;

int main() {
    char A, B;

    cin>>A>>B;

    int sum=int(A)+int(B), sub=0;

    if(int(A)>=int(B)){
        sub=int(A)-int(B);
    }
    else{
        sub=int(B)-int(A);
    }

    cout<<sum<<" "<<sub;
    return 0;
}