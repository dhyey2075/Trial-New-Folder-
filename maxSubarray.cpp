#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0,mx=0,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int start = 0, end = 0;
    while(start != n){
        end = start;
        while(end<n){
        sum=0;
        for(int i=start; i<=end; i++){
            sum = sum + arr[i];
            }
        mx = max(mx, sum);
        c++;
        end++;
        }
        start++;
    }
    cout<<"Max sum of subarrays is: "<<mx;
}