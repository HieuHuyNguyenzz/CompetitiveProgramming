#include <bits/stdc++.h>

using namespace std;

void backtrack(map<int,int>&cnt,int sum,int a[],int s,int e){
    if(s<e){
        cnt[sum+a[s]]=max(cnt[sum+a[s]],cnt[sum]+1);
        backtrack(cnt,sum+a[s],a,s+1,e);
        backtrack(cnt,sum,a,s+1,e);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    int a[34];
    a[0]=2;
    a[1]=3;
    a[2]=5;
    for(int i=3;i<34;i++){
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    map<int,int>cnt1,cnt2;
    backtrack(cnt1,0,a,0,17);
    backtrack(cnt2,0,a,17,34);
    cin>>t;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        int ans=0;
        for(auto j:cnt1){
            if(cnt2[x-j.first]!=0&&x!=j.first)
                ans=max(ans,j.second+cnt2[x-j.first]);
            else if(x==j.first)
                ans=max(ans,j.second+cnt2[x-j.first]);
        }
        if(ans==0)ans=-1;
        cout<<"Case #"<<i+1<<": "<<ans<<'\n';
    }
    return 0;
}
