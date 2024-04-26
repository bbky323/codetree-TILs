#include <iostream>
using namespace std;

int main() {
    char cold1, cold2, cold3, state;
    int temp1, temp2, temp3, count = 0;
    cin>>cold1>>temp1>>cold2>>temp2>>cold3>>temp3;
    if(cold1 == 'Y' && temp1 >= 37){
        state = 'A';
        count += 1;
    }
    else if(cold1 == 'N' && temp1 >= 37){
        state = 'B';
    }
    else if(cold1 == 'Y' && temp1 <37){
        state = 'C';
    }
    else if(cold1 == 'N' && temp1 <37){
        state = 'D';
    }
    if(cold2 == 'Y' && temp2 >= 37){
        state = 'A';
        count += 1;
    }
    else if(cold2 == 'N' && temp2 >= 37){
        state = 'B';
    }
    else if(cold2 == 'Y' && temp2 <37){
        state = 'C';
    }
    else if(cold2 == 'N' && temp2 <37){
        state = 'D';
    }
    if(cold3 == 'Y' && temp3 >= 37){
        state = 'A';
        count += 1;
    }
    else if(cold3 == 'N' && temp3 >= 37){
        state = 'B';
    }
    else if(cold3 == 'Y' && temp3 <37){
        state = 'C';
    }
    else if(cold3 == 'N' && temp3 <37){
        state = 'D';
    }
    if(count>=2){
        cout<<"E"<<endl;
    }
    else{
        cout<<"N"<<endl;
    }
    return 0;
}