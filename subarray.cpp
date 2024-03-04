#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int start = 0, end = 0;
    while(start != n){
        end = start;
        while(end<n){
        for(int i=start; i<=end; i++){
            cout<<arr[i]<<" ";
            }
        cout<<endl;
        c++;
        end++;
        }
        start++;
    }
    cout<<"Total subarrays: "<<c;
}