// 33/50 test
#include<bits/stdc++.h>
using namespace std;

int dp[500][249][501][2];
int n,x,k;
int mod=1e9+7;

long long backtrack(int pos, int cnt, int f, int last_choice){
    if(cnt+(n-pos+1)/2 <k){
        return 0;
    }
    if(pos == n){
        if(cnt == k) return 1;
        return 0;
    }
    if(dp[pos][cnt][last_choice][f] != -1) return dp[pos][cnt][last_choice][f];

    long long res = 0;

    for(int dgt = 1; dgt<=x; dgt++){
        int nf = f;
        int ncnt = cnt;
        if(f == 0 && dgt < last_choice){
            nf = 1;
            ncnt++;
        }
        else if(pos != 0 && dgt > last_choice){
            nf = 0;
        }
        else if(dgt == last_choice){
            nf = 1;
        }
        if(ncnt <= k) res += backtrack(pos+1, ncnt, nf, dgt);
    }
    res%=mod;
    return dp[pos][cnt][last_choice][f] = res;
}

int main(){
    cin>>n>>x>>k;
    if(k > (n-1)/2 || x<2){cout<<'0'; return 0;}
    memset(dp, -1, sizeof(dp));
    long long res = backtrack(0, 0, 1, 0);
    cout<<res%mod;
}