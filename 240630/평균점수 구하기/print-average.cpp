#include <iostream>
using namespace std;

int main() {
    double score[8], sum=0, mean=0;
    for(int i=0; i<8; i++){
        cin>>score[i];
        sum+=score[i];
    }
    mean=sum/8;
    printf("%.1f", mean);
    return 0;
}