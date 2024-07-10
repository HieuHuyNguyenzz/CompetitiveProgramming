#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int ans=0,base=5;
    while(base<=n){
        ans+=(n-base)/base+1;
        base*=5;
    }
    cout<<ans;
}
