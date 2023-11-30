#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    double a,b;long long ans=INT_MAX;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++){
        double x,y,r;
        cin>>x>>y>>r;
        double z=sqrt((a-x)*(a-x)+(b-y)*(b-y))-r;
        if(z-(long long)z==0)z=z-1;
		ans=min(ans,(long long)z);
        //cout<<z;
    }
    cout<<ans;
    
    return 0;
}
