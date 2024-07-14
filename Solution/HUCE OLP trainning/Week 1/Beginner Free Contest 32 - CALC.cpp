#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=2;
    while(t--){
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if(a[0]+a[1]-a[2]==0)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    }
    return 0;
}
