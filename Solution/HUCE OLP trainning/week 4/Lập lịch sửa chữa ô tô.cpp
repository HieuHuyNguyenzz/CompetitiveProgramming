#include <bits/stdc++.h>

using namespace std;

struct car{
    double a;
    double b;
    double i ;
    int x;
};
bool cmp(car x,car y){
    return x.i>y.i;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    car c[n];
    for(int i=0;i<n;i++){
        cin>>c[i].a;
        c[i].x=i+1;
    }
    for(int i=0;i<n;i++){
        cin>>c[i].b;
        c[i].i=c[i].a/c[i].b;
    }
    sort(c,c+n,cmp);
    long long ans=0;int k=0;
    for(int i=0;i<n;i++){
        ans+=(c[i].a*(c[i].b+k));
		k+=c[i].b;
    }
    cout<<ans<<endl;
    for(int i=0;i<n;i++){
        cout<<c[i].x<<" ";
    }
    return 0;
}
