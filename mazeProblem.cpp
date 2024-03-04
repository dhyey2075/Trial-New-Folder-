#include<bits/stdc++.h>
using namespace std;
int mazeCount(int m, int n){
    if(m==1 || n==1){
        return 1;
    }
    else if(n==1 && m==0){
        return 1;
    } 
    else if(n==0 && m==1){
        return 1;
    }
    else{
        return mazeCount(n-1,m)+mazeCount(n, m-1);
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    int ans = mazeCount(m,n);
    cout<<ans;
}