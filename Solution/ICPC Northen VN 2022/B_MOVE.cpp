#include <bits/stdc++.h>

using namespace std;

vector<long long>adj[1000000];

int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    long long m,n,s;
    cin>>m>>n>>s;
    for(int i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        for(int j=0;j<m;j++){
            long long k=(j*a+b)%m;
            adj[j].push_back(k);
        }
    }
    vector<bool>visited(m,false);
    vector<int>step(m,-1);
    step[s]=0;
    queue<long long>q;
    q.push(s);
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for (long long v : adj[s]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
                step[v]=step[s]+1;

            }
        }
    }
    cout<<step[0]<<"\n";
}
