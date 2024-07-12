#include<bits/stdc++.h>
using namespace std;

int k= 1e9+7;
int dp[5002][5002];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++){
        dp[i+1][0]=i+1;
    }
    for(int i=0;i<b.size();i++){
        dp[0][i+1]=i+1;
    }

    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            dp[i+1][j+1]=INT_MAX;
            if(a[i]==b[j]){
                dp[i+1][j+1]=min(dp[i][j], min(dp[i][j+1],dp[i+1][j])+1);
            }
            else{
                dp[i+1][j+1]=min(dp[i][j], min(dp[i][j+1],dp[i+1][j]))+1;
            }
        }
    }
    // for(int i=0;i<=a.size();i++){
    //     for(int j=0;j<=b.size();j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    cout<<dp[a.size()][b.size()];
}