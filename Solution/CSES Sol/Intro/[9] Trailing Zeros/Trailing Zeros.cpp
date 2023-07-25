#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int i=5,ans=0;
    while(i<=n){
    	for(int j=i;j<=n;j+=i){
    		ans++;
		}
		i*=5;
	}
	cout<<ans;
    return 0;
}
