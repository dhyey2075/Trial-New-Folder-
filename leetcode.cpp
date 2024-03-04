#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int* nums, int numsSize) {
    int c=0;
    for(int i=0;i<numsSize;i++){
        if(i<numsSize-1 && (nums[i]==nums[i+1])){
            continue;
        }
        nums[c]=nums[i];
        c++;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = removeDuplicates(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<ans;
}