#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    int i=0;

    cin>>A>>B;

    while(true){
        if(A.substr(i,2)==B){
            A.erase(i,2);
            i=-1;
        }

        i++;

        if(i==A.length()-1){
            break;
        }
    }
    cout<<A;
    return 0;
}