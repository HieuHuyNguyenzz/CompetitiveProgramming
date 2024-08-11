#include <bits/stdc++.h>

using namespace std;
int a[300002];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin>>n>>d;
    
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x==0){
			a[i]++;
        	a[i]+=a[i-1];
        	
        }	
		//cout<<a[i]<<" ";
    }
    if(d==1){
        int ans=0;int i=1;
        while(i<=n){
            while(a[i]!=0)i++;
            ans+=a[i-1];
            i++;
        }
        cout<<ans;
    }
    else{
        int i=1;int ans=0;
        while(i<=n){
            while(a[i]!=0)i++;
            ans+=a[i-1]/d;
            i++;
        }
        cout<<ans;
    }
    return 0;
}
