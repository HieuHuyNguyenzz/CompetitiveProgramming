#include <bits/stdc++.h>

using namespace std;
int ans=INT_MAX;
void backtrack(map<int,int>&cnt, int i,int e,int a[],int sum1,int sum2){
    if(i==e){
        cnt[sum1-sum2]++;
    }
    else{
        backtrack(cnt,i+1,e,a,sum1+a[i],sum2);
        backtrack(cnt,i+1,e,a,sum1,sum2+a[i]);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>cnt1;
    map<int,int>cnt2;
    map<int,int>co;
    backtrack(cnt1,0,n/2,a,0,0);
    backtrack(cnt2,n/2,n,a,0,0);
    for(auto x:cnt1){
        auto y=cnt2.upper_bound(-x.first);
        ans=min(ans,abs(y->first+x.first));
        co[abs(y->first+x.first)]+=y->second*x.second;
        y--;
        ans=min(ans,abs(y->first+x.first));
        co[abs(y->first+x.first)]+=y->second*x.second;
    }
    cout<<ans<<" "<<co[ans]/2;
    return 0;
}
