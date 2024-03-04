#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int j=1,k;
        for(j=1;j<=n;j++){
            if(i>=j && j<=n){
                k = j;
                cout<<j<<" ";
            }
        }
            int t = n-2*i;
            while(t--){
                cout<<j<<" ";
            }
            int p = n-2*k;
            while(k--){
                cout<<k<<" ";
            }
        cout<<endl;
    }
}