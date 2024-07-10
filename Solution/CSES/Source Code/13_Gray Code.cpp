#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<string>s={"0", "1"};
	for(int i=2;i<=n;i++){
        vector<string>r;
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                r.push_back(s[i]+'0');
                r.push_back(s[i]+'1');
            }
            else{
                r.push_back(s[i]+'1');
                r.push_back(s[i]+'0');
            }
        }
        s=r;
    }
    for(string i:s){
        cout<<i<<"\n";
    }
    return 0;
}