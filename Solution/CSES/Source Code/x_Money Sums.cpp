#include<bits/stdc++.h>
using namespace std;

int mod= 1e9+7;

int dp[100005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,s=0,ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=s;j>=a[i];j--){
            if(dp[j]==0){
                dp[j]+=dp[j-a[i]];
                if(dp[j]==1){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<"\n";
    for(int i=1;i<=s;i++){
        if(dp[i]==1){
            cout<<i<<" ";
        }
    }
    

}