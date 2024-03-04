#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main(){
    int n,day=0;
    cin>>n;
    int arr[n];
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }
    int mx = arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i]>mx){
            if(arr[i+1]<arr[i]){
                day = i;
            }
        }
        mx = max(mx,arr[i]);
    }
    if(arr[n-1]>arr[i]){
        day = n-1;
    }
    cout<<day<<endl;
}