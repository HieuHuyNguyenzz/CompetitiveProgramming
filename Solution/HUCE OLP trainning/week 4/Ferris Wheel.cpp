#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=0;
	sort(a,a+n);
	int i=0,j=n-1;
	while(i!=j&&i<j){
		if(a[i]+a[j]<=x){
			ans++;
			i++;
			j--;
		}
		else {
			j--;
			ans++;
		}
		
	}
	if(i==j)ans++;
	cout<<ans;
}
