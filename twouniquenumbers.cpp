#include <bits/stdc++.h>
using namespace std;
int getBit(int n, int pos){
    return (n & (1<<pos)!=0);
}
int unique(int arr[], int n){
    int xorsum =0;
    for(int i=0;i<n;i++){
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}
int main(){
    int n,xorsum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    xorsum = unique(arr,n);
    int tempxor = xorsum;
    int setBit=0,pos=-1;
    while(setBit!=1){
        setBit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor=0;
    for(int j=0;j<n;j++){
        if(getBit(arr[j],pos)){
            newxor = newxor^arr[j];
        }
    }
    int a = newxor;
    int b = tempxor^newxor;
    cout<<a<<" "<<b<<endl;
}