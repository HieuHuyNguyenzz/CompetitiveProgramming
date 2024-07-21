#include<bits/stdc++.h>
using namespace std;

long long mod= 1e9+7;

long long dp[1000005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=1;i<10;i++){
        dp[i]=1;
    }
    for(int i=10;i<=n;i++){
        int k=i;
        dp[i]=INT_MAX;
        while(k){
            int x=k%10;
            dp[i]=min(dp[i],dp[i-x]+1);
            k/=10;
        }
    }
    cout<<dp[n];

}