#include <iostream>
using namespace std;

int main() {
    int arr[2][4];
    double row_mean[4], col_mean[2], sum=0;

    for(int i=0; i<2; i++){
        double col_sum=0;
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
            col_sum+=arr[i][j];
            sum+=arr[i][j];
        }
        col_mean[i]=col_sum/4;
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            if(j==0){
                row_mean[j]+=arr[i][j];
                if(i==1){
                    row_mean[j]/=2;
                }
            }
            else if(j==1){
                row_mean[j]+=arr[i][j];
                if(i==1){
                    row_mean[j]/=2;
                }
            }
            else if(j==2){
                row_mean[j]+=arr[i][j];
                if(i==1){
                    row_mean[j]/=2;
                }
            }
            else{
                row_mean[j]+=arr[i][j];
                if(i==1){
                    row_mean[j]/=2;
                }
            }
        }
    }

    cout<<fixed;
    cout.precision(1);
    
    for(int i=0; i<2; i++){
        cout<<col_mean[i]<<" ";
    }
    cout<<""<<endl;

    for(int i=0; i<4; i++){
        cout<<row_mean[i]<<" ";
    }
    cout<<""<<endl;

    cout<<sum/8;
    return 0;
}