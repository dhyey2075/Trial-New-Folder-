#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int arr[]={2,3,5};
    int num[8]={1};
    int k=0;
    for(int i=0;i<(1<<3);i++){
        for(int j=0;j<3;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
                num[k] = num[k]*arr[j];
            }
        }
        cout<<endl;
        k++;
    }
    for(int i=0;i<8;i++){
        cout<<num[i];
    }
}