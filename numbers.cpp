#include<bits/stdc++.h>
using namespace std;
void printDecreasingNumbers(int n){
    if(n==0){
        return;
    }
    printDecreasingNumbers(n-1);
    cout<<n<<endl;
}
int main(){
   printDecreasingNumbers(4); 
}