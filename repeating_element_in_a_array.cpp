#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main(){
    int n,minidx=INT_MAX;
    const int N = 1000;
    cin>>n;
    int a[n];
    int b[N];
    for(int l=0;l<N;l++){
        b[l]=-1;
    }
    for(int l=0;l<n;l++){
        cin>>a[l];
    }
    for(int i=0;i<n;i++){
        if(b[a[i]]==-1){
            b[a[i]]=i;
        }
        else{
            minidx = min(minidx,b[a[i]]);
        }
    }
    if(minidx == INT_MAX) cout<<"-1"<<endl;
    else cout<<a[minidx]<<endl;
    
}