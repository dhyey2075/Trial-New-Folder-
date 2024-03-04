#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main(){
    vector<pair<int,int>> v;
    v.push_back({3,-1});
    v.push_back({1,-1});
    sort(v.begin(),v.end(),sortbysec);
    for(auto i : v){
        cout<<i.first<<" "<<i.second<<endl;
    }
}