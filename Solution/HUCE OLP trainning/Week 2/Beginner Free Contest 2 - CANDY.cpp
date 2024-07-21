#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long ans=INT_MAX,sum=0;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    long long x=0;
    for(int i=0;i<n;i++){
        x+=a[i];
        ans=min(ans,abs(sum-x-x));
    }
    cout<<ans;
    return 0;
}
