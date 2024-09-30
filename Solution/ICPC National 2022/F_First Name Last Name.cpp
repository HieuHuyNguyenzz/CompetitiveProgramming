#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s,f,l;
        cin>>s>>f>>l;
        string k = l+f;
        if(k!=s)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
    
    return 0;
}
