#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>y>>x;
        if(max(x,y)==x&&x%2==1){
            cout<<max(x,y)*max(x,y)+1-min(x,y)<<"\n";
        }
        else if(max(x,y)==y&&y%2==0){
            cout<<max(x,y)*max(x,y)+1-min(x,y)<<"\n";
        }
        else{
            cout<<(max(x,y)-1)*(max(x,y)-1)+min(x,y)<<"\n";
        }
    }
}
