#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n & (n-1)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}