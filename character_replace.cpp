#include <bits/stdc++.h>
#include <string>
using namespace std;
void myfun(string s){
    if(s.length()==0){
        return;
    }
    else if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        myfun(s.substr(2));
    }
    else{
        cout<<s[0];
        myfun(s.substr(1));
    }
}
int main(){
    string str;
    cin>>str;
    myfun(str);
}