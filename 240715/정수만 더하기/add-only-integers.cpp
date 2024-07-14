#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int sum=0;
    
    cin>>s;

    for(int i=0; i<s.length(); i++){
        if(isdigit(s[i])!=0){
            sum+=s[i]-'0';
        }
    }

    cout<<sum;
    return 0;
}