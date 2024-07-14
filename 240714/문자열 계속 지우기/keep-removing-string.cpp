#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    int i=0;

    cin>>A>>B;

    while(true){
        if(A.substr(i,B.length())==B){
            A.erase(i,B.length());
            i=-1;
        }

        i++;

        if(i==A.length()-1 || A.length()==0 || A.length()<B.length()){
            break;
        }
    }
    cout<<A;
    return 0;
}