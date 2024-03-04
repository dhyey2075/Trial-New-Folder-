#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool check[10000]={false};
    for(int i=0;i<n;i++){
        if(a[i]>0){
            check[a[i]]=true;
        }
    }
    int ans = -1;
    for(int j=1;j<n;j++){
        if(check[j]==false){
            ans = j;
            break;
        }
    }
    cout<<ans<<endl;
}