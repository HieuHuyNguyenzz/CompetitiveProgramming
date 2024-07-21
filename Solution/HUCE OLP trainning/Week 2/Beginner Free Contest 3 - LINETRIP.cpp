#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,mi=INT_MAX,ma=-INT_MAX;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mi=min(mi,x);
        ma=max(ma,x);
    }
    if(mi<0&&ma>0){
        cout<<(ma-mi)*2;
    }
    else
        cout<<max(abs(ma),abs(mi))*2;
    return 0;
}
