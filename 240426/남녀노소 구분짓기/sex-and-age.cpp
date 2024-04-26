#include <iostream>
using namespace std;

int main(){
    int sex, age;
    cin>>sex>>age;
    if(sex == 0){
        if(age >= 19){
            cout<<"MAN"<<endl;
        }
        else{
            cout<<"BOY"<<endl;
        }
    }
    else{
        if(age >= 19){
            cout<<"WOMAN"<<endl;
        }
        else{
            cout<<"GIRL"<<endl;
        }
    return 0;
    }
}