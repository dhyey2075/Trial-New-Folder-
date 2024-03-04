#include<bits/stdc++.h>
using namespace std;
string moveAllxToEnd(string s){
    if(s.length()==0){
        return "";
    }
    char c = s[0];
    string ros = moveAllxToEnd(s.substr(1));
    if(isdigit(s[0])){
        return c+ros;
    }
    else{
        return ros+c;
    }
}
int main(){
    string str;
    cin>>str;
    string ans = moveAllxToEnd(str);
    cout<<ans;
}