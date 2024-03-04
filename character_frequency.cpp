#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    unordered_map<char,int> mpp;
    for(int i=0;i<s.length();i++){
        mpp[s[i]]++;
    }
    cout<<mpp[c];
}