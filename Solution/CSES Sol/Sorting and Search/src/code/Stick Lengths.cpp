#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n,sum=0;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	long long ans=0;
	for(int i=0;i<n;i++){
		ans+=abs(a[n/2]-a[i]);
	}
	cout<<ans;
}
