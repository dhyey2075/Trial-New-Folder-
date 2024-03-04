#include<bits/stdc++.h>
#include<ctime>
using namespace std;
string reverseString(string s){
    if(s.length()==0){
        return "";
    }
    char c = s[0];
    string ros = reverseString(s.substr(1));
    return ros+c;
}
int main(){
    string s,ans;
    cin>>s;
    string a = reverseString(s);
    cout<<a;
}