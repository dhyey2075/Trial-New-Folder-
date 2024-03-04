#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }
    int ans=2;
    int curr=2;
    int pd = arr[0]-arr[1];
    int j=1;
    while(j<n){
        if(pd==arr[j]-arr[j+1]){
            curr++;
        }
        else{
            curr=2;
        }

        pd=arr[j]-arr[j+1];
        j++;
        ans = max(ans,curr);
    }
    cout<<ans<<endl;
}