#include <bits/stdc++.h>

using namespace std;
int connect(int n){
    return n*(n-1)/2;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++){
	    	int x,y;
	    	cin>>x>>y;
	    }	
	    if(n==1)cout<<"Vuong"<<"\n";
	    else if(n==2)cout<<"Hoang"<<"\n";
	    else{
	        int a=n/2;
	        if(a%2){
	            cout<<"Hoang"<<"\n";
	        }
	        else{
	            cout<<"Vuong"<<"\n";
	        }
	    }
    }
}
