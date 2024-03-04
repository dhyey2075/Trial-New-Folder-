#include<bits/stdc++.h>
using namespace std;
int determinant(int arr[i][j]){
    if(i==m-2 and j==n-2){
        return arr[i+1][j+1]*arr[i][j] - arr[i][j+1]*arr[i+1][j];
    }
    
}
int main(){
    int m;
    int n;
    int arr[m][n];
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<n;j++){

    }
}