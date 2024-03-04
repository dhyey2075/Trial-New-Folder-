#include <bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n, char src, char helper, char dest){
    if(n==0){
        return;
    }
    towerOfHanoi(n-1,src,dest,helper);
    cout<<"Place disk from "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1,helper,src,dest);
}
int main(){
    int n;
    cin>>n;
    towerOfHanoi(n,'S','H','D');
}