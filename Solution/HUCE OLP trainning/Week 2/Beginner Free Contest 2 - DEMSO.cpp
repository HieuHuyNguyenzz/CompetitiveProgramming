#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int d=0,a=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string x;cin>>x;
        if(x[0]=='-')a++;
        else if(x=="0")continue;
        else d++;
    }
    cout<<a<<" "<<d;
    return 0;
}
