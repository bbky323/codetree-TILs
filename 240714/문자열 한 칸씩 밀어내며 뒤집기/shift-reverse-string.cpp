#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int q, q_num;

    cin>>s>>q;

    for(int i=0; i<q; i++){
        cin>>q_num;
        if(q_num==1){
            s=s.substr(1, s.length()-1)+s[0];
            cout<<s<<endl;
        }
        else if(q_num==2){
            s=s[s.length()-1]+s.substr(0, s.length()-1);
            cout<<s<<endl;
        }
        else if(q_num==3){
            for(int j=s.length()-1; j>=0; j--){
                cout<<s[j];
            }
            cout<<""<<endl;
        }
    }
    return 0;
}