#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k,ans=0,c=0;;
	cin>>n>>m>>k;
	vector<int>a(n),b(m);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	for(int i=0;i<n;i++){
		auto x=lower_bound(b.begin()+c,b.end(),a[i]-k);
		if(*x<=a[i]+k&&x!=b.end()){
			ans++;
			c=x-b.begin()+1;
		}
		
	}
	cout<<ans;
}
