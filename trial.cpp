#include<bits/stdc++.h>
using namespace std;
void printSubset(int arr[],int n){
    bool flag;
    for(int i=0;i<(1<<n);i++){
        flag = true;
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                flag = false;
                cout<<arr[j]<<" ";
            }
        }
            if(flag){
                cout<<"Phi";
            }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printSubset(arr,n);
}