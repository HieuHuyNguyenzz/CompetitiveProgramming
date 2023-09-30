#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	multiset<int>a;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.insert(x);
	}
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		auto it = a.upper_bound(x);
		if(it==a.begin()){
			cout<<-1<<"\n";
		}
		else{
			it = --it;
			cout<<*it<<"\n";
			a.erase(it); 	
		}
		
	}
}
