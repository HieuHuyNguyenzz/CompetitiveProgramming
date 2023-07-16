#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int ans=0,count=1;
    for(int i=1;i<s.length();i++){
    	if(s[i]==s[i-1])count++;
    	else{
    		ans=max(ans,count);
			count=1;
		}
	}
	ans=max(ans,count);
	cout<<ans;
	
    return 0;
}
