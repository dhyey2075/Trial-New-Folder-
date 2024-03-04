#include <bits/stdc++.h>
using namespace std;
string removeDuplicate(string s){
    if(s.length()==0){
        return "";
    }
    char c = s[0];
    string ans = removeDuplicate(s.substr(1));
    if(c==ans[0]){
        return ans;
    }
    else{
        return c+ans;
    }
}
int main(){
    string str;
    cin>>str;
    cout<<removeDuplicate(str);
}