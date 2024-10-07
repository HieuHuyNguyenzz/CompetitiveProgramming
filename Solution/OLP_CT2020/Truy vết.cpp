#include <bits/stdc++.h>

using namespace std;
struct pos{
    double x,y;
    int trangthai=-1;
};
double dis(pos a,pos b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,f0;double d;
    cin>>n>>f0>>d;
    pos p[n+1];
    for(int i=1;i<=n;i++){
        cin>>p[i].x>>p[i].y;
    }
    int f2=0;
    p[f0].trangthai=0;
    vector<int>f1;
    for(int i=1;i<=n;i++){
        if(p[i].trangthai!=-1)continue;
        if(dis(p[i],p[f0])<d){
            f1.push_back(i);
            p[i].trangthai=1;
        }
    }
    for(int j:f1){
        for(int i=1;i<=n;i++){
            if(p[i].trangthai!=-1)continue;
            if(dis(p[i],p[j])<d){
                f2++;
                p[i].trangthai=1;
            }
        }
    }
    cout<<f1.size()<<" "<<f2;
    return 0;
}
