// 58/69 test
#include <bits/stdc++.h>

using namespace std;

long long ans;
int n,k;
int fl[13],fr[13];

void backtrack(int k, int a[]){
    if(k==0){
        long long x=0;
        for(int i=0;i<n;i++){
            fl[i+1]=max(fl[i],a[i+1]);
        }
        for(int i=n-1;i>=0;i--){
            fr[i+1]=max(fr[i+2],a[i+1]);
        }    
        for(int i=2;i<n;i++){
            x+=min(fl[i],fr[i])-a[i];
        }
        ans=max(ans, x);
    }
    else{
        for(int i=1;i<=n;i++){
            a[i]++;
            backtrack(k-1, a);
            a[i]--;
        }
    }
}

int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    cin>>n>>k;
    int a[13];
    for(int i=0;i<n;i++){
        cin>>a[i+1];
    }
    backtrack(k, a);
    cout<<ans;
}
