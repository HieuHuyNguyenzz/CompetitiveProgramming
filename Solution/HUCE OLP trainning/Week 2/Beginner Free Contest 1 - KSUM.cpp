#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    long long a[n+1];
    a[0]=0;
    long long sum=0,ans=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
        if(i>=k){
            sum-=a[i-k];
            ans=max(ans,sum);
        }
    }
    cout<<ans;
    return 0;
}
