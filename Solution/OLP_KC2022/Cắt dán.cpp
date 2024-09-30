#include <bits/stdc++.h>

using namespace std;

struct point{
    double a,b;
};

double distance(point x, point y){
    return sqrt((x.a-y.a)*(x.a-y.a)+(x.b-y.b)*(x.b-y.b));
}

void gendis(vector<double>&dis, point x[]){
    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            dis.push_back(distance(x[i],x[j]));
        }
    }
}
int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    point c[4];
    int ans=0;
    for(int i=0;i<4;i++){
        cin>>c[i].a>>c[i].b;
    }
    vector<double>dis;
    gendis(dis, c);
    sort(dis.begin(),dis.end());
    int t;
    cin>>t;
    while(t--){
        bool ck=false;
        point x[4];
        for(int i=0;i<4;i++){
            cin>>x[i].a>>x[i].b;
        }   
        vector<double>checkdis;
        gendis(checkdis, x);
        sort(checkdis.begin(),checkdis.end());
        for(int i=0;i<6;i++){
            if(dis[i]!=checkdis[i]){
                ck=true;
            }
        }
        if(ck==false){
            ans++;
        }
    }
    cout<<ans;
}
