#include <bits/stdc++.h>

using namespace std;

template<class T> struct Segment { 
	const T ID = 0;
	int n; 
	vector<T> seg;
	void init(int _n){ 
		n = _n; seg.assign(2*n,ID); 
	}
	T comb(T a, T b){ 
		return __gcd(a,b); 
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    long long a[n],b[n];
    Segment<long long>x;
    x.init(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        x.upd(i,abs(a[i]-b[i]));
    }
    while(k--){
        int r,l;
        cin>>l>>r;
        cout<<x.query(l-1,r-1)<<"\n";
    }
    return 0;
}
