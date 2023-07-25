#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int ans=0,f=0;
	for(int i=0;i<m;i++){
		auto x = lower_bound(a.begin()+f, a.end(), b[i]-k);
		if(a.end()!=x&&b[i]+k>=a[x-a.begin()]){
			ans++;
			f=x-a.begin()+1;
		}
	}
	cout<<ans;
    return 0;
}
