#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s2="";
    for(int i=0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=90){
            s[i] = tolower(s[i]);
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
                continue;
            }
            cout<<".";
            cout<<s[i];
            continue;
            // s2 = s2 + s[i];
        }  
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
            continue;
        } 
        else{
            cout<<".";
            cout<<s[i];
        }
    }
}