#include <bits/stdc++.h>
using namespace std;
int main(){
    int m1=3,n1=3,m2=3,n2=3;
    cin>>m1>>n1>>m2>>n2;
    int arr1[m1][n1];
    int arr2[m2][n2];
    for(int i = 0; i < m1; i++){
        for(int j = 0; j < n1; j++){
            cin>>arr1[i][j];
        }
    }
    for(int i = 0; i < m2; i++){
        for(int j = 0; j < n2; j++){
            cin>>arr2[i][j];
        }
    }
    int ans[m1][n2]={};
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            for(int k=0;k<n1;k++){
                ans[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    } 
}