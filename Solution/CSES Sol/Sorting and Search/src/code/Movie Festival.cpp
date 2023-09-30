#include <bits/stdc++.h>
using namespace std;
 
bool cmp(pair<int,int>x,pair<int,int>y){
	return x.second<y.second;
}
 
int main() {
    int n;
    vector<pair<int,int> >c;
    cin>>n;
    for(int i=0;i<n;i++){
    	int s,e;
    	cin>>s>>e;
    	c.push_back({s,e});
	}
	sort(c.begin(),c.end(),cmp);
	int ans=1,e=c[0].second;
	for(int i=1;i<n;i++){
		if(e<=c[i].first){
			e=c[i].second;
			ans++;
		}
	}
	cout<<ans;
    return 0;
}
