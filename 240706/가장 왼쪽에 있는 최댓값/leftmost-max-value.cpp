#include <iostream>
using namespace std;

int main() {
    int N, arr1[1000], max, idx, arr2[1000], cnt=0;
    
    cin>>N;
    
    for(int i=0; i<N; i++){
        cin>>arr1[i];
    }

    while(true){
        max=arr1[0];
        for(int i=0; i<N; i++){ //최댓값의 자리 찾음
            if(max<arr1[i]){
                max=arr1[i];
                idx=i;
            }
        }
        if(max==arr1[0]){// 첫번째 배열이 최댓값일 때
            idx=0;
        }
        arr2[cnt]=idx+1;
        cnt++;
        if(idx==0){
            break;
        }
        N=idx;// 찾는 범위 줄이기
    }
    
    for(int i=0; i<cnt; i++){
        cout<<arr2[i]<<" ";
    }

    return 0;
}