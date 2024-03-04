#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main(){
    int n,sum=0,mx1=INT_MIN,mx2=INT_MIN,tsum=0;
    cin>>n;
    int arr[n];
    int newarr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        newarr[i] = -arr[i];
    //Kadane for arr
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
        tsum = tsum + arr[i];
        if(sum<0){
            sum=0;
        }
        mx1 = max(sum,mx1);
    }
    //making the sum for next kadane algo 0
    sum=0;
    //Kadane for newarr
    for(int i=0; i<n; i++){
        sum = sum + newarr[i];
        if(sum<0){
            sum=0;
        }
        mx2 = max(sum,mx2);
    }
    cout<<max(mx1,tsum+mx2);
}