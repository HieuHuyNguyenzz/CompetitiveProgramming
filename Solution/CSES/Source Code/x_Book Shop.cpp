#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,x;
    cin>>n>>x;
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    int h[n],a[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
            dp[i][j] = dp[i-1][j];
            if(j>=h[i-1])
                dp[i][j] = max(dp[i-1][j-h[i-1]]+a[i-1], dp[i-1][j]);
        }
    }
    cout<<dp[n][x];
}