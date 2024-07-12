#include<bits/stdc++.h>
using namespace std;

int mod= 1e9+7;

int dp[501][501];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=max(a,b);i++){
        dp[i][1]= i-1;
        dp[1][i]= i-1;
    }
    for(int i=2;i<=a;i++){
        for(int j=2;j<=b;j++){
            if(i==j){
                dp[i][j]=0;
            }
            else{
                dp[i][j]=INT_MAX;
                for(int k=1;k<=i/2;k++){
                    dp[i][j]=min(dp[k][j]+dp[i-k][j]+1, dp[i][j]);
                }
                for(int k=1;k<=j/2;k++){
                    dp[i][j]=min(dp[i][k]+dp[i][j-k]+1, dp[i][j]);
                }
            }
            
        }
    }
    
    cout<<dp[a][b];
}