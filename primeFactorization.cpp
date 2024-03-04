#include <bits/stdc++.h>
using namespace std;
void primeFactor(unsigned long long int n){
    bool flag = true;
    // unsigned long long int spf[n];
    vector<unsigned long long int> spf(n + 1, 0);
    for(unsigned long long int i=2;i<=n;i++){
        spf[i]=i;
    }
    for(unsigned long long int i=2;i<=n;i++){
        if(spf[i]==i){
            if(i*i>n){
                break;
                flag = false;
            }
            for(unsigned long long int j=i*i;j<=n;j=j+i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n = n/spf[n];
    }
}
int main(){
    unsigned long long int n;
    cin>>n;
    primeFactor(n);
}