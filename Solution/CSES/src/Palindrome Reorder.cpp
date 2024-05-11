#include <bits/stdc++.h>
 
using namespace std;
int main() {
    
    string s;int count =0;
    cin>>s;
	int n = s.length();
    string ans1="",ans2="",mid="";
    sort(s.begin(),s.end());
    //cout<<s<<"\n";
    for(int i=0;i<n;){
    	if(s[i]==s[i+1]){
    		ans1+=s[i];
    		ans2+=s[i];
    		i+=2;
		}
		else{
			mid=s[i];
			count++;
			i++;
		}
	}
	if(count>1)cout<<"NO SOLUTION";
	else{
		reverse(ans2.begin(), ans2.end());
		cout<<ans1<<mid<<ans2;
	}
		
    return 0;
}
