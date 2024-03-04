#include<bits/stdc++.h>
#include<string>
using namespace std;
int superDigit(string n, int k) {
    if(n.length()==1){
        return n[0]-'0';
    }
    int sumSingle = 0;
    for(unsigned long long int i=n.length()-1;i>=0;i--){
        sumSingle = sumSingle + n[i]-'0';
    }
    sumSingle = sumSingle*k;
    string s = to_string(sumSingle);
    superDigit(s,1);
}
int main(){
    string s = "123";
    cout<<superDigit(s,3);
}