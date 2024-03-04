#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p=n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n && p>0;i++){
            if(arr[i]==0){
                for(int k=0;k<n;k++){
                    arr[k]=0;
                }
                break;
            }
            for(int j=i+1;j<n && p>0;j++){
                if(arr[i]%arr[j]==0 || arr[j]%arr[i]==0){
                    arr[i] = min(arr[i],arr[j]);
                    arr[j] = min(arr[i],arr[j]);
                    p--;
                }
            }
        }

        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        t--;
    }
}