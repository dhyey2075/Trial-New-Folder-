#include <bits/stdc++.h>
using namespace std;
void binaryToDecimal(int n){
    int x=1;
    int num=0,counter=0;
    while(n>1){
        int lastDigit=n%10;
        num = num + x*lastDigit;
        x = x*2;
        n=n/10;
        counter++;
    }
    num = num - n%10*x;
    cout<<num;
}
void DecimalToBinary(unsigned long long int a){
    int binary[128];
    int i=0;
    while(a>0){
        binary[i]=a%2;
        a=a/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<binary[j];
    }
}
void DecimalToHexadecimal(unsigned long long int a){
    int binary[256];
    int i=0;
    while(a>0){
        binary[i]=a%16;
        a=a/16;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        if(binary[j]>=0 && binary[j]<=9){
            cout<<binary[j];
        }
        else{
            cout<<char(binary[j]+55);
        }
    }
}
void hexadecimalToDecimal(string s){
    int ans=0;
    int x=1;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            ans = ans + x*(s[i]-'0');
        }
        else{
            ans = ans + x*(s[i] - 'A' + 10);
        }
        x=x*16;
    }
    cout<<ans;
}
int main(){
    unsigned long long int a;
    cin>>a;
    DecimalToHexadecimal(a);
}