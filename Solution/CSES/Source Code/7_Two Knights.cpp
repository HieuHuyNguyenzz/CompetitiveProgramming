#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    long long t;
    cin>>t;
    for(long long n=1;n<=t;n++){
        if(n==1){
            cout<<0<<"\n";
        }
        else if(n==2){
            cout<<6<<"\n";
        }
        else if(n==3){
            cout<<28<<"\n";
        }
        else{
            long long center = max(0ll,n-4);
            long long ans=0;
            ans+=center*center*8;
            for(int i=0;i<n-1;i++){
                if(i==0){
                    ans+=8;
                }
                else if(i==1||i==n-2){
                    ans+=12;
                }
                else{
                    ans+=16;
                }
            }
            for(int i=1;i<n-2;i++){
                if(i==1){
                    ans+=16;
                }
                else{
                    ans+=24;
                }
            }
            cout<<(n*n-1)*n*n/2 - ans/2<<"\n";
        }
    }
}
