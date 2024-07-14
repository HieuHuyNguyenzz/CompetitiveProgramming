#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,ans=0;
    map<int,int>a;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        a[k]++;
        ans+=a[x-k*k];
    }

    cout<<ans;
    return 0;
}