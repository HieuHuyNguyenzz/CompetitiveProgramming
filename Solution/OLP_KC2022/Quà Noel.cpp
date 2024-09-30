#include <bits/stdc++.h>
using namespace std;

const int maxN = 100010;
vector <int> g[maxN];
int cv, ce, visited[maxN];

void dfs(int u){
visited[u] = 1; cv++;
for (int v: g[u]){
ce++;
if (visited[v] == 0)
dfs(v);

}
}

int main(){
int n, m, res = 0;
cin >> n >> m;
while (m--) {
int u, v;
cin >> u >> v;
g[u].push_back(v);
g[v].push_back(u);
}
for (int u = 1; u <= n; u++){
if (visited[u]==0){
ce = 0; cv = 0;
dfs(u);
ce /= 2;
res += ce < cv ? cv - 1 : cv;
}
}
cout << res;
}
