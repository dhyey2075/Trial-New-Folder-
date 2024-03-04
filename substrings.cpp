#include<bits/stdc++.h>
using namespace std;
void substrings(string s, int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<s[j]-'a';
            }
        }
        cout<<endl;
    }
}
int main(){
    string str;
    getline(cin,str);
    int n = str.length();
    substrings(str,n);
}