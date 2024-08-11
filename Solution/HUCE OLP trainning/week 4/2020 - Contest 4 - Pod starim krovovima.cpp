#include <bits/stdc++.h>

using namespace std;
int f[1001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    
    long long sum=0;
    vector<pair<long long,int> >t;
    for(int i=0;i<n;i++){
        long long z,a;
        cin>>z>>a;
        sum+=z;
        t.push_back({a,i});
    }
    sort(t.begin(),t.end());
    int i=n-1,count=0;
    while(sum>0){
        if(sum>=t[i].first){
            sum-=t[i].first;
            f[t[i].second]=t[i].first;
        }
        else{
            f[t[i].second]=sum;
            sum=0;
        }
        count++;
        i--;
    }
    cout<<n-count<<endl;
    for(int j=0;j<n;j++){
        cout<<f[j]<<" ";
    }
    return 0;
}
