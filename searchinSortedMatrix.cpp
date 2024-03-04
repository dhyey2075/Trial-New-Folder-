#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,target;
    cin>>m>>n>>target;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int x = 0, y = n-1;
    while(x<n && y>=0){
        if(arr[x][y]==target){
            break;
        }
        else if(target>arr[x][y]){
            x++;
        }
        else{
            y--;
        }
    }
    cout<<x<<" "<<y;
    }