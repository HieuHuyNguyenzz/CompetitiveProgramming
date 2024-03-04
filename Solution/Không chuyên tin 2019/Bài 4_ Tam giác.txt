#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<long long>pre = {a,a+n};
    for(int i=1;i<n;i++){
        pre[i]+=pre[i-1];
    }
    int ans=0;
    for(int i=0;i+k<=n;i++){
        int d=-1;
        long long sum=pre[i+k-1]-pre[i-1];
        {
            int l = i,r = i+k-3;
            while(l<=r){
                int mid=(l+r)/2;
                if((pre[mid]-pre[i-1])*2<sum){
                    d=mid;
                    l=mid+1;
                }
                else
                    r=mid-1;
            }
        }
        if(d==-1)continue;
        int b=-1;
        {
            int l = i,r = i+k-2;
            while(l<=r){
                int mid=(l+r)/2;
                if((pre[mid]-pre[d])*2<sum){
                    b=mid;
                    l=mid+1;
                }
                else
                    r=mid-1;
            }
        }
        if(b==-1)continue;
        long long c=pre[i+k-1]-pre[b];
        if(c*2<sum)ans++;
    }
    cout<<ans;
    return 0;
}
