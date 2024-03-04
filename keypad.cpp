#include<bits/stdc++.h>
using namespace std;
void keypad(string s, string ans){
    string keypadArr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char c = s[0];
    string code = keypadArr[c-'0'];
    string ros = s.substr(1);
    for(int i=0;i<code.length();i++){
        keypad(ros,ans+code[i]);
    }
}
int main(){
    string s,ans;
    cin>>s;
    keypad(s,ans);
}