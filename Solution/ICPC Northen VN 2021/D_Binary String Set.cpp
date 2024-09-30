#include <bits/stdc++.h>

using namespace std;

int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(s[i+1]=='1'&&i+1<n){
                    i++;
                }
            }
            else{
                if(s[i+1]=='0'&&i+1<n){
                    i++;
                }
                else{
                    ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }
}
