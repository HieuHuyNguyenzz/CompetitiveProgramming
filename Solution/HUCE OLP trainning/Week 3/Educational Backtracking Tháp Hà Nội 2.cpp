#include <bits/stdc++.h>

using namespace std;

int n;
string s;
vector<string>ans;

void thapHanoi(int n,char a,char b,char c){
    if(n==1){
        string k="";
        k+=a;
        k+=b;
        ans.push_back(k);
	}
	else{
		thapHanoi(n-1,a,c,b);
		thapHanoi(1,a,b,c);
		thapHanoi(n-1,c,b,a);
    }

}

int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    cin>>n>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            continue;
        }
        else{
            char mid = 'A'+3-(s[i]-'A'+s[i+1]-'A');
            thapHanoi(i+1, s[i],s[i+1], mid);
        }
    }
    if(s[n-1]!='C'){
        char mid = 'A'+3-(s[n-1]-'A'+'C'-'A');
        thapHanoi(n, s[n-1],'C', mid);
    }
    cout<<ans.size()<<"\n";
    for(auto i:ans){
        cout<<i<<"\n";
    }
}
