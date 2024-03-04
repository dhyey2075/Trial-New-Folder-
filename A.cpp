#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k,sum=0,totalSum=0,i=1;
        cin>>n;
        cin>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            totalSum+=arr[i];
        }
        sum = arr[n-1];
        if(k==0){
            cout<<arr[n-1]-arr[0]<<endl;
        }
        if(k==n){
            cout<<totalSum<<endl;
        }
        else{
        while(i<=k){
            sum+=arr[n-i-1];
            i++;
        }
        cout<<sum<<endl;
        }
        t--;
    }
}