#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n,sum=0,ans=-INT_MAX;
	cin>>n;
	for(int i=0;i<n;i++){
		long long x;
		cin>>x;
		sum+=x;
		ans=max(ans,sum);
		if(sum<0){
			sum=0;
		}
	}
	cout<<ans;    
}
