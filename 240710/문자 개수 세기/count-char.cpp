#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char low;
    int cnt=0;

    getline(cin, str);
    cin>>low;

    for(int i=0; i<str.length(); i++){
        if(str[i]==low){
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}