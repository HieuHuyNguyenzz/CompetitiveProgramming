#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n,ans=0;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    	if(upper_bound(a.begin(),a.end(),x)==a.end()){
    		a.push_back(x);
		}
		else{
			int idx=upper_bound(a.begin(),a.end(),x)-a.begin();
			a[idx]=x;
		}
 
	}
	cout<<a.size();
}
