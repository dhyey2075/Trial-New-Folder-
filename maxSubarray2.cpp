#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main(){
    int n,sum=0,mx=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum = sum + arr[j];
            mx = max(mx, sum);
        }
    }
    cout<<"The max sum of subarray is: "<<mx;
}