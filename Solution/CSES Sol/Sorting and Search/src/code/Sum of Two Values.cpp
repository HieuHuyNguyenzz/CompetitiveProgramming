#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	map<int,int>a;
	int n,x;
	cin>>n>>x;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		auto it = a.find(x-k);
		if(it!=a.end()){
			cout<<i+1<<" "<<it->second+1;
			return 0;
		}
		a.insert({k,i});
	}
	cout<<"IMPOSSIBLE";
}
