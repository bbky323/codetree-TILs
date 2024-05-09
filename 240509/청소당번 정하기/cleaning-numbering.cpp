#include <iostream>
using namespace std;

int main() {
    int n, class1=0, aisle=0, toilet=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%12==0){
            toilet+=1;
        }
        else if(i%3==0){
            aisle+=1;
        }
        else if(i%2==0){
            class1+=1;
        }
    }
    cout<<class1<<" "<<aisle<<" "<<toilet;
    return 0;
}