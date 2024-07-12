#include<bits/stdc++.h>
using namespace std;

int k= 1e9+7;
int n=1000001;
long long dp[2][1000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    dp[0][1]=1;
    dp[1][1]=1;

    for(int i=2;i<=n;i++){
        dp[0][i]+=((dp[0][i-1]*2)%k+dp[1][i-1]);
        dp[1][i]+=dp[0][i-1]+(4*dp[1][i-1]%k);
        dp[0][i]%=k;
        dp[1][i]%=k;
    }
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<(dp[0][x]+dp[1][x])%k<<"\n";
    }
}