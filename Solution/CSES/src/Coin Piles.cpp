#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if((a+b)%3!=0){
            cout<<"NO"<<"\n";
        }
        else if(max(a,b)-min(a,b)>min(a,b)){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
}
