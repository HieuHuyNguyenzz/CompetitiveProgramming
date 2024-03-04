#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    int cnt=1,ans=1;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            cnt++;
        }
        else{
            cnt=1;
        }
        ans=max(ans,cnt);
    }
    cout<<ans;
}