#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,ans=0;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	if(i>0){
    		if(a[i]<a[i-1]){
    			ans+=a[i-1]-a[i];
    			a[i]=a[i-1];
			}
		}
	}
	cout<<ans;
	
    return 0;
}
