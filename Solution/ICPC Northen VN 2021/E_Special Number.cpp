#include <bits/stdc++.h>

using namespace std;

long long dp[15][3][160][160];
int isPrime[160];
vector<int>num;
long long n;

long long backtrack(int pos, int reminder, int sumx, int sumy){
    if(pos==num.size()){
        if(isPrime[sumx]==0&&isPrime[sumy]==0&&reminder==0){
            return 1;
        }
        return 0;
    }
    
    if(dp[pos][reminder][sumx][sumy]!=-1){
        return dp[pos][reminder][sumx][sumy];
    }
    
    long long res=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            int t=reminder+i+2*j;
            if(t%10==num[pos])
                res+=backtrack(pos+1, t/10, sumx+i, sumy+j);
        }
    }
    return dp[pos][reminder][sumx][sumy] = res;
}

int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    cin>>n;
    isPrime[0]=isPrime[1]=1;
    for(int i=2;i<160;i++){
        if(isPrime[i]==0){
            for(int j=2;j*i<160;j++){
                isPrime[j*i]=1;
            }
        }
    }
    while(n){
        num.push_back(n%10);
        n/=10;
    }
    memset(dp, -1, sizeof(dp));
    long long ans=backtrack(0,0,0,0);
    cout<<ans;
}
