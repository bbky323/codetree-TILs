#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int q, q_num;
    char temp;

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
            for(int j=0; j<s.length()/2; j++){
                temp=s[j];
                s[j]=s[s.length()-j-1];
                s[s.length()-j-1]=temp;
            }
            cout<<s<<endl;
        }
    }
    return 0;
}