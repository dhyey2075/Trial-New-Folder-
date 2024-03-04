#include <bits/stdc++.h>
using namespace std;
void sw(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
int main(){
    int a=5,b=4;
    sw(a,b);
    cout<<a<<" "<<b;
}