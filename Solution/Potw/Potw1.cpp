// 21/50 test ~ 42đ
#include <bits/stdc++.h>

using namespace std;
int n,m,k,q;
vector<vector<int>>edge;
vector<int>ans;
vector<int>v;
vector<bool>ck;
vector<int>dfs(int u){
	ck[u]=1;
	vector<int>cc(m,0);
	cc[--v[u]]++;
    for(int uv:edge[u]){
    	if(ck[uv]==0){
    		vector<int>x=dfs(uv);
    		for(int i=0;i<m;i++)cc[i]+=x[i];
    		ck[uv]=1;	
    	}
   	}
	for(int i=0;i<m;i++){
	    if(cc[i]>0&&cc[i]<=k)ans[u]++;
	}
    return cc;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    edge.assign(n,vector<int>());
    ans.assign(n,0);
    v.assign(n,0);
    ck.assign(n,0);
    for(int i=1;i<n;i++){
        int p;
        cin>>p;
        edge[p-1].push_back(i);
    }
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>fwsf=dfs(0);
    cin>>q;
    while(q--){
    	int x;
    	cin>>x;
		cout<<ans[x-1]<<"\n";
	}

    return 0;
}
