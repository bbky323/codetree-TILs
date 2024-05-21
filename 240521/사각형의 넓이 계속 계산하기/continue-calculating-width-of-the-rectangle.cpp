#include <iostream>
using namespace std;

int main() {
    int width, height;
    char a;
    while (true){
        cin>>width>>height>>a;
        cout<<width*height<<endl;
        if(a=='C'){
            break;
        }
    }
    return 0;
}