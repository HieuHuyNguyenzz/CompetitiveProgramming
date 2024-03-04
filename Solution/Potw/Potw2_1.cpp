// AC 8/9 test
// Sai test 7?
#include <bits/stdc++.h>

using namespace std;
int n,m,q;
vector<int>a,b;
vector<int>parent;
vector<int>r;

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int c) {
    a = find_set(a);
    c = find_set(c);
    if (a != c) {
        if (r[a] < r[c])
            swap(a, c);
        parent[c] = a;
        if (r[a] == r[c])
            r[a]++;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>q;
    a.assign(n,0);
	b.assign(m+1,-1);
	parent.assign(n,-1);
	r.assign(n,0);
	for(int i=0;i<n;i++){
		parent[i]=i;
	}
    map<int,vector<int>>c;
    for(int i=0;i<n;i++){
        cin>>a[i];
        c[a[i]].push_back(i);
    }
    for(auto i:c){
        if(i.second.size()==1){
            b[i.first]=0;
        }
    }
    for(int j=0;j<q;j++){
        int u,v;
        cin>>u>>v;
        --u;--v;
        union_sets(u,v);
        if(b[a[v]]==-1){
            int x=find_set(v);
            for(int i=0;i<c[a[v]].size();i++){
                if(find_set(c[a[u]][i])==x){
                    b[a[v]]=j+1;
                }
                else{
                    c[a[u]].erase(c[a[u]].begin(),c[a[u]].begin()+i-1);
                    b[a[v]]=-1;
                    break;
                }
            }    
        }
        if(b[a[u]]==-1&&b[a[u]]!=b[a[v]]){
            int x=find_set(u);
            for(int i=0;i<c[a[u]].size();i++){
                if(find_set(c[a[u]][i])==x){
                    b[a[u]]=j+1;
                }
                else{
                    c[a[v]].erase(c[a[v]].begin(),c[a[v]].begin()+i-1);
                    b[a[u]]=-1;
                    break;
                }
            }    
        }
    }
	for(int i=1;i<b.size();i++)cout<<b[i]<<" ";
    return 0;
}
