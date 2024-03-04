#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int i=0;
    while(i<str.length()){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            if(str[i-1]!='a' || str[i-1]!='e' || str[i-1]!='i' || str[i-1]!='o' || str[i-1]!='u' &&
            str[i+1]!='a' || str[i+1]!='e' || str[i+1]!='i' || str[i+1]!='o' || str[i+1]!='u'){
                cout<<str[i-1];
                cout<<str[i];
                cout<<str[i+1];
                cout<<".";
                i = i+3;
            }
            else{
                cout<<str[i-1];
                cout<<str[i];
                i++;
            }
            }
    }
}