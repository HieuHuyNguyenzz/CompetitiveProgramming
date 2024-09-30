#include <bits/stdc++.h>

using namespace std;

template<class T> struct Segment { 
	const T ID = 1e18;
	int n; 
	vector<T> seg;
	void init(int _n){ 
		n = _n; seg.assign(2*n,ID); 
	}
	T comb(T a, T b){ 
		return min(a,b); 
	}
	void pull(int p){ 
		seg[p] = comb(seg[2*p],seg[2*p+1]); 
	}
	void upd(int p, T val) { 
		seg[p += n] = val; 
		for (p /= 2; p; p /= 2) 
			pull(p); 
	}
	T query(int l, int r) {	
		T ra = ID, rb = ID;
		for (l += n, r += n+1; l < r; l /= 2, r /= 2) {
			if (l&1) ra = comb(ra,seg[l++]);
			if (r&1) rb = comb(seg[--r],rb);
		}
		return comb(ra,rb);
	}
};

int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int n,m,k;
    cin>>m>>n>>k;
    vector<long long>a(m),b(n);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    Segment<long long>seg;
    seg.init(m);
    sort(b.begin(),b.end());
    for(int i=0;i<m;i++){
        auto j = upper_bound(b.begin(),b.end(),a[i]);
        long long x=min(abs(*j-a[i]), abs(*(j-1)-a[i]));
        seg.upd(i+1, x);
    }
    while(k--){
        int l,r;
        cin>>l>>r;
        cout<<seg.query(l,r)<<"\n";
        
    }
}
