#include<bits/stdc++.h>
using namespace std;

int mod= 1e9+7;

long long dp[2][5005][5005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        dp[1][i][i]=a[i];
    }
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<n-i;j++){
            dp[0][j][j+i]=min(dp[1][j][j+i-1],dp[1][j+1][j+i]);
            dp[1][j][j+i]=max(dp[0][j][j+i-1]+a[j+i],dp[0][j+1][j+i]+a[j]);
            //cout<<j<<" "<<j+i<<": "<<dp[0][j][j+i]<<" "<<dp[1][j][j+i]<<"\n";
        }
    }
    cout<<dp[1][0][n-1];
}