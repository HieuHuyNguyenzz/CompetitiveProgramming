#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    if(n%4==0||n%4==3){
        cout<<"YES"<<"\n";
        if(n%4==0){
            cout<<n/2<<"\n";
            for(int i=1;i<=n;i++){
                if(i%4==0||i%4==1){
                    cout<<i<<" ";
                }
            }
            cout<<"\n";
            cout<<n/2<<"\n";
            for(int i=1;i<=n;i++){
                if(i%4==2||i%4==3){
                    cout<<i<<" ";
                }
            }
        }
        else if(n%4==3){
            cout<<(n-3)/2+2<<"\n";
            cout<<"1 2 ";
            for(int i=4;i<=n;i++){
                if(i%4==0||i%4==3){
                    cout<<i<<" ";
                }
            }
            cout<<"\n"<<(n-3)/2+1<<"\n";
            cout<<"3 ";
            for(int i=4;i<=n;i++){
                if(i%4==1||i%4==2){
                    cout<<i<<" ";
                }
            }
        }
    }
    else{
        cout<<"NO";
    }
}
