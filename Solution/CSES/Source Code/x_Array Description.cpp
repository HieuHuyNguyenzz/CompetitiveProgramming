#include<bits/stdc++.h>
using namespace std;

int k= 1e9+7;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<vector<int>>dp(n+1, vector<int>(m+1,0));
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(a[0]>0){
        dp[1][a[0]]++;
    }
    for(int i=1;i<=n;i++){
        if(a[i-1]==0){
            if(i==1){
                for(int j=1;j<=m;j++){
                    dp[i][j]=1;
                }
            }
            else{
                for(int j=1;j<=m;j++){
                    dp[i][j]+=dp[i-1][j]+dp[i-1][j-1];
                    dp[i][j]%=k;
                    if(j!=m){
                        dp[i][j]+=dp[i-1][j+1];
                    }
                    dp[i][j]%=k;
                }
            }
        }
        else{
            dp[i][a[i-1]]+=dp[i-1][a[i-1]-1]+dp[i-1][a[i-1]];
            dp[i][a[i-1]]%=k;
            if(a[i-1]!=m){
                dp[i][a[i-1]]+=dp[i-1][a[i-1]+1];
            }
            dp[i][a[i-1]]%=k;
        }
    }
    int ans=0;
    if(a[n-1]==0){
        for(int i=1;i<=m;i++){
            ans+=dp[n][i];
            ans%=k;
        }
    }
    else{
        ans=dp[n][a[n-1]];
    }
    cout<<ans;
}