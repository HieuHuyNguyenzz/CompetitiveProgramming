#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,t;
	cin>>n>>t;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	long long lo=1,up=t*a[n-1];
	while(lo<up){
		long long mid = (lo + up)/2;
		long long p=0;
		for(long long i:a){
			p+=mid/i;
			if (p >= t) {  // deal with overflow
				break;
			}
		}
		if(p>=t){
			up=mid;
		}
		else{
			lo=mid+1;
		}
	}
	cout<<lo;
}
