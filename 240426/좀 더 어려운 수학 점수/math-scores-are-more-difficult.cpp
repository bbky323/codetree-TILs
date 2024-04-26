#include <iostream>
using namespace std;

int main() {
    int Amath, Aeng, Bmath, Beng;
    cin>>Amath>>Aeng>>Bmath>>Beng;
    if(Amath > Bmath)
        cout<<"A"<<endl;
    else if(Amath == Bmath){
        if(Aeng > Beng){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }
    else{
        cout<<"B"<<endl;
    }
    return 0;
}