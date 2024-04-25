#include <iostream>
using namespace std;

int main() {
    char upper;
    cin>>upper;
    if(upper == 'S'){
        cout<<"Superior"<<endl;
    }
    else if(upper == 'A'){
        cout<<"Excellent"<<endl;
    }
    else if(upper == 'B'){
        cout<<"Good"<<endl;
    }
    else if(upper == 'C'){
        cout<<"Usually"<<endl;
    }
    else{
        cout<<"Failure"<<endl;
    }
    return 0;
}