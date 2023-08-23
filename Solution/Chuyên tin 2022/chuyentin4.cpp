#include <bits/stdc++.h>

using namespace std;

const int inf = 4000007; 
vector<int> dist;
vector<vector <int> > rev_dist; 
vector<vector <pair <int, int> > > adj, rev_adj;  
int n, m, numQuery; 
int minSum[2005][2005]; 
struct edge {
	int u, v, weight; 
};
vector <edge> listEdges; 

void dijkstra(int start, const vector <vector <pair <int, int> > > adj, vector <int> &dist) {
	dist[start] = 0; 
	priority_queue <pair <int, int>, vector <pair <int, int> >, greater <pair <int, int> > > pq; 
	pq.push(make_pair(0, start)); 
	while (pq.empty() == false) {
    	pair <int, int> pqTop = pq.top();
    	pq.pop();
    	if (pqTop.first != dist[pqTop.second]) {
      		continue; 
    	}
    	int u = pqTop.second; 
    	for (int i = 0; i < (int) adj[u].size(); i++) {
    		pair <int, int> neighbor = adj[u][i]; 
      		if (dist[neighbor.first] > dist[u] + neighbor.second) {
        		dist[neighbor.first] = dist[u] + neighbor.second; 
        		pq.push(make_pair(dist[neighbor.first], neighbor.first)); 
      		}
    	}
  	}
}

int main () {
	ios_base::sync_with_stdio(false);
	cin >> n >> m >> numQuery;
	dist.resize(n + 1, inf);
	adj.resize(n + 1);  
	rev_dist.resize(n + 1);
	rev_adj.resize(n + 1);  
	for (int i = 1; i <= n; i++) {
    	rev_dist[i].resize(n + 1, inf); 
  	}
  	for (int i = 1; i <= m; i++) {
    	int u, v, weight;
    	cin >> u >> v >> weight;
    	listEdges.push_back((edge) {u, v, weight});
    	adj[u].push_back(make_pair(v, weight));
    	rev_adj[v].push_back(make_pair(u, weight));   
  	} 
  	dijkstra(1, adj, dist);
  	for (int i = 2; i <= n; i++) {
    	dijkstra(i, rev_adj, rev_dist[i]); 
  	}
  	for (int i = 2; i <= n; i++) {
    	for (int weight = 1; weight <= 2001; weight++) {
      		minSum[i][weight] = inf; 
    	}
  	}
  	for (int i = 2; i <= n; i++) {
    	for (int j = 0; j < (int) listEdges.size(); j++) {
      		edge currentEdge = listEdges[j]; 
      		int totalDistance = dist[currentEdge.u] + rev_dist[i][currentEdge.v];
      		if (totalDistance >= inf) {
        		continue; 
      		}
      		minSum[i][currentEdge.weight] = min(minSum[i][currentEdge.weight], totalDistance);  
    	}
    	for (int weight = 2000; weight >= 1; weight--) {
      		minSum[i][weight] = min(minSum[i][weight], minSum[i][weight + 1]); 
    	}
  	}
  	for (int query = 1; query <= numQuery; query++) {
    	int endVertex, t0; 
    	cin >> endVertex >> t0; 
    	int ans = dist[endVertex]; 
    	if (minSum[endVertex][t0 + 1] != inf) {
      		ans = min(ans, t0 + minSum[endVertex][t0 + 1]);   
    	}
   		cout << ans << endl; 
  	} 
  	return 0; 
}
