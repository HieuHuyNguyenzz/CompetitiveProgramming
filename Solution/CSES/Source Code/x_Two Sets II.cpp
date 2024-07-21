#include<bits/stdc++.h>
using namespace std;

long long mod= 1e9+7;

long long dp[1000005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,s;
    cin>>n;
    s=n*(n+1)/2;
    if(s%2==1){
        cout<<0;
        return 0;
    }
    dp[0]=(mod + 1) / 2;;
    for(int i=1;i<=n;i++){
        for(int j=s;j>=i;j--){
            dp[j]+=dp[j-i];
            dp[j] >= mod ? dp[j] -= mod : 0;
        }
    }
    cout<<(dp[s/2]);
}