// 10/25 test
#include <bits/stdc++.h>

using namespace std;
template<class T> struct Seg { // comb(ID,b) = b
	const T ID = 0; T comb(T a, T b) { return a+b; }
	int n; vector<T> seg;
	void init(int _n) { n = _n; seg.assign(2*n,ID); }
	void pull(int p) { seg[p] = comb(seg[2*p],seg[2*p+1]); }
	void upd(int p, T val) { // set val at position p
		seg[p += n] = val; for (p /= 2; p; p /= 2) pull(p); }
	T query(int l, int r) {	// min on interval [l, r]
		T ra = ID, rb = ID;
		for (l += n, r += n+1; l < r; l /= 2, r /= 2) {
			if (l&1) ra = comb(ra,seg[l++]);
			if (r&1) rb = comb(seg[--r],rb);
		}
		return comb(ra,rb);
	}
};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    Seg<long long>stm;
    stm.init(n+1);
    long long p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
        stm.upd(i+1,p[i]);
    }
    while(q--){
        int k;
        cin>>k;
        if(k==1){
            int d;
            cin>>d;
            vector<int>cp(p,p+n);
            for(int i=0;i<n;i++){
                p[(i+d)%n]=cp[i];
            }
            for(int i=0;i<n;i++)
            	stm.upd(i+1,p[i]);
        }
        else if(k==2){
            int s,t,h;
            cin>>t>>s>>h;
            int id=t-1;
            for(int i=id;i<=s-1;i++){
                if(p[i]<p[id]){
                    id=i;
                }
            }
            p[id]=h;
            stm.upd(id+1,p[id]);

        }
        else if(k==3){
            int s,t;
            cin>>s>>t;
            cout<<stm.query(s,t)<<"\n";
        }
    }
    return 0;
}