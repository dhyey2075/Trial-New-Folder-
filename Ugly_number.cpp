#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    cin>>n;
    string s = to_string(n);
    char min;
    for(int i=0;i<s.length();i++){
        if(s[i]<=s[0]){
            min = s[i];
        }
    }
    if(min<s[0]){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
}