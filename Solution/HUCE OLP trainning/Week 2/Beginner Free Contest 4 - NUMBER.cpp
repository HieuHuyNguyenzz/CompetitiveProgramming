#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long ans=0;
    cin>>n;
    vector<int>a(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        int x=min(a[i-1],a[i]);
        ans+=x;
        a[i]-=x;
        ans+=a[i]/2;
        a[i]%=2;
    }
    cout<<ans;
    return 0;
}
