#include<bits/stdc++.h>
using namespace std;
void substring(string s,string ans){
    if(s.length()==0){
        return ;
    }
    char c = s[0];
    substring(s.substr(1));
    cout<<c;
    cout<<c;
    substring(s.substr(1));
    cout<<endl;

    
}
int main(){
    string s;
    cin>>s;
    substring(s);
}