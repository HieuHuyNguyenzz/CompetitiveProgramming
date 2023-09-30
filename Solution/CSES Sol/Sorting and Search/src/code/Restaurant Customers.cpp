#include <bits/stdc++.h>
using namespace std;
 
bool cmp(pair<int,int>x,pair<int,int>y){
	return x.first<y.first;
}
 
int main() {
    int n;
    vector<pair<int,int> >c;
    cin>>n;
    for(int i=0;i<n;i++){
    	int s,e;
    	cin>>s>>e;
    	c.push_back({s,1});
    	c.push_back({e,-1});
	}
	sort(c.begin(),c.end(),cmp);
	int count=0,ans=0;
	for(int i=0;i<c.size();i++){
		count+=c[i].second;
		ans=max(ans,count);
	}
	cout<<ans;
    return 0;
}
