#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n,k;
    cin>>m>>n>>k;
    vector<long long>a(m,0),b(n,0);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(b.begin(),b.end());
    multiset<long long>ans;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(ans.size()==k){
                auto x=ans.end();
            	if(*(--x)>a[i]+b[j]){
            		ans.erase(x);
                	ans.insert(a[i]+b[j]);	
				}
				else{
				    break;
				}
            }
            else if(ans.size()<k)
                ans.insert(a[i]+b[j]);
        }
    }
	for(long long i:ans)
		cout<<i<<" ";    
		
	return 0;
}
