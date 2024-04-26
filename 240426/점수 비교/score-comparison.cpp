#include <iostream>
using namespace std;

int main() {
    int Amath, Aeng, Bmath, Beng;
    cin>>Amath>>Aeng>>Bmath>>Beng;
    if(Amath>Bmath && Aeng>Beng){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}