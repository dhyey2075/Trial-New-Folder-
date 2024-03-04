#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto& i : v){
        cin>>i;
    }
    vector<int> ans;
    multiset<int,greater<int>> s;
    for(int i=0;i<k;i++){
        s.insert(v[i]);
    }
    ans.push_back(*s.begin());
    for(int i=k;i<n;i++){
        s.erase(s.lower_bound(i-k));
        s.insert(v[i]);
        ans.push_back(*s.begin());
    }
    for(auto i : ans){
        cout<<i<<" ";
    }
}