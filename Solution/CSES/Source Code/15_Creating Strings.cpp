#include <bits/stdc++.h>
using namespace std;
 
set<string>ans;
int n;
void dequy(string s, map<char,int>a){
    if(s.length()==n){
        ans.insert(s);
    }
    for(auto i:a){
        if(i.second>0){
            a[i.first]--;
            dequy(s+i.first, a);
            a[i.first]++;
        }
    }
}
int main() {
    string s;
    cin>>s;
    n=s.length();
    map<char,int>a;
    for(char i:s){
        a[i]++;
    }
    dequy("", a);
    cout<<ans.size()<<"\n";
    for(string i:ans){
        cout<<i<<"\n";
    }
}