#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n,ans=0,s=-1;
    cin>>n;
    map<int,int>a;
    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    	if(a.find(x)!=a.end()){
    		if(a[x]>s)
    			s=a[x];
    		a.erase(x);
		}
		a.insert({x,i});
		ans=max(ans,i-s);
		//cout<<ans<<" ";
	}
    cout<<ans;		
}
