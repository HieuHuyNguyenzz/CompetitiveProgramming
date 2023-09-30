#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	map<int,int>mp;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		mp[a]=i;
	}
	int i=1,pos=0,ans=1;
	while(i<=n){
		if(mp[i]<pos){
			ans++;
		}
		pos=mp[i];
		i++;
	}
	cout<<ans;
}
