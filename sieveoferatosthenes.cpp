#include <bits/stdc++.h>
using namespace std;
void primeSieve(int n){
    int prime[100000];
    for(int k=0;k<100;k++){
        prime[k]=0;
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j=j+i){
                prime[j] = 1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    primeSieve(n);
}