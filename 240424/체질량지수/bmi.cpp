#include <iostream>
using namespace std;

int main() {
    int h, w;
    cin>>h>>w;
    double b = (10000*w)/(h*h);
    if (b>=25){
        cout<<b<<endl;
        cout<<"Obesity"<<endl;
    }
    else{
        cout<<b<<endl;
    }

    return 0;
}