#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    if(a%13==0 || a%19==0){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}