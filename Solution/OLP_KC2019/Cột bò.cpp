#include <bits/stdc++.h>

using namespace std;

struct point{
    double a,b;
    double r;
};

double d(point x, point y){
    return sqrt((x.a-y.a)*(x.a-y.a)+(x.b-y.b)*(x.b-y.b));
}

int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int n;
    point c;
    cin>>n>>c.a>>c.b;
    point x[n];
    double ans;
    for(int i=0;i<n;i++){
        cin>>x[i].a>>x[i].b>>x[i].r;
        if(i==0){
            ans=d(x[i],c)-x[i].r;
        }
        ans=min(ans,d(x[i],c)-x[i].r);
    }
    if(ans-floor(ans)==0){
        ans--;
    }
    cout<<int(floor(ans));
}
