#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    cin>>s;

    for(int i=0; i<s.length(); i++){
        if(isdigit(s[i])!=0){
            cout<<s[i];
        }
        else if(isalpha(s[i])!=0){
            cout<<char(tolower(s[i]));
        }
    }
    return 0;
}