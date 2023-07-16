#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	long long y,x;
    	long long ans;
    	cin>>y>>x;
    	if(x>=y){
    		if(x%2==0){
    			ans=(x-1)*(x-1)+y;
			}
			else{
				ans=x*x-y+1;
			}
		}
		else{
			if(y%2==1){
    			ans=(y-1)*(y-1)+x;
			}
			else{
				ans=y*y-x+1;
			}
		}
		cout<<ans<<"\n";
	}
    return 0;
}
