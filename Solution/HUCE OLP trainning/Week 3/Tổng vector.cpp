#include <bits/stdc++.h>

using namespace std;

map<pair<int,int>,int>mitm(int s,int e,pair<int,int>a[]){
    map<pair<int,int>,int>x;
    x[pair<int,int>(0,0)]=1;
    for(int j=s;j<e;j++){
        map<pair<int,int>,int>y=x;
        for(auto i=y.end();;i--){
            x[pair<int, int>(i->first.first+a[j].first,i->first.second+a[j].second)]+=y[i->first];
            if(i==y.begin()){
                break;
            }
        }
    }
    return x;
}
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    pair<int,int>a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    int u,v,ans=0;
    cin>>u>>v;
    map<pair<int,int>,int>f1=mitm(0,n/2,a);
    map<pair<int,int>,int>f2=mitm(n/2,n,a);
    for(auto i:f1){
        ans+=i.second*f2[pair<int,int>{u-i.first.first,v-i.first.second}];
    }
    cout<<ans;
    return 0;
}
