#include <bits/stdc++.h>

using namespace std;
int connect(int n){
    return n*(n-1)/2;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--){
        string s1,s2;
        cin>>s1>>s2;
        int ans=1;
        for(int i=0;i<s1.length();i++){
            if(s1[i]==s2[i]&&s2[i]=='O'){
                ans=0;
                break;
            }
            else{
                if(s1[i]==s2[i]&&s2[i]=='X'){
                    ans*=2;
                    ans%=1000000007;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
