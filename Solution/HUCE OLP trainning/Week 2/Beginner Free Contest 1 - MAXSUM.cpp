#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long ans=0,sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum<0){
            sum=0;
        }
        else{
            ans=max(ans,sum);
        }
    }
    cout<<ans;
    return 0;
}
