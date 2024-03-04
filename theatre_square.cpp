#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int n,m,a;
    cin>>n>>m>>a;
    if(m%a!=0){
        m = m + a*(m/a + 1) - m;
    }
    if(n%a!=0){
        n = n + a*(n/a + 1) - n;
    }
    cout<<(m*n)/(a*a)<<endl;
}