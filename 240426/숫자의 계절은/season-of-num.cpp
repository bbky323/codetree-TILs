#include <iostream>
using namespace std;

int main() {
    int m;
    cin>>m;
    if(m>=3 && m<=5){
        cout<<"Spring"<<endl;
    }
    if(m>=6 && m<=8){
        cout<<"Summer"<<endl;
    }
    if(m>=9 && m<=11){
        cout<<"Fall"<<endl;
    }
    if(m==12 || m<=2){
        cout<<"Winter"<<endl;
    }
    return 0;
}