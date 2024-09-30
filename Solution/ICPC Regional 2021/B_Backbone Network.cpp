#include <bits/stdc++.h>

using namespace std;
int connect(int n){
    return n*(n-1)/2;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    vector<int>ar;
    
    cin>>n;
	for(int i=2;i<=n;i+=3)ar.push_back(i);
    double ans=(n)*connect(n-1);
    cout<<ans/n<<"\n";
    for(int i=2;i<=n;i++){
		cout<<1<<" "<<i<<"\n";
		}	
    return 0;
}
