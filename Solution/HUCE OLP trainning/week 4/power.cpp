#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long l,r;
        cin>>l>>r;
        int y=39;
        int x=2;
        while(true){
            while(pow(x,y)<l){
                x++;
            }
            if(pow(x,y)>r){
                y--;
            }
            else{
                cout<<"Case #"<<i+1<<": "<<y<<"\n";
                break;
            }
        }
    }
    return 0;
}
