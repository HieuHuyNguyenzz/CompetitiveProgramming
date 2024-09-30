#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n;
        string s="";
        cin>>n;
        while(n>1){
            if(n%2)s+='R';
            else s+='L';
            n/=2;
        }
        for(int i=s.length()-1;i>=0;i--){
            cout<<s[i];
        }
        cout<<"\n";
    }
    
    return 0;
}
