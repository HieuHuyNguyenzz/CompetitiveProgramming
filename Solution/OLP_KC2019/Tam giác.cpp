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
		return max(a,b); 
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
    int n,k,ans=0;
    cin>>n>>k;
    long long a[n];
    long long prefix[n+1];
    prefix[0]=0;
    Segment<long long>x;
    x.init(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        prefix[i+1]=a[i]+prefix[i];
        x.upd(i+1,a[i]);
    }
    for(int i=1;i+k-1<=n;i++){
        if(x.query(i,i+k-1)*2<prefix[i+k-1]-prefix[i-1]){
            ans++;
            //cout<<x.query(i,i+k-1)<<" "<<prefix[i+k-1]-prefix[i-1]<<"\n";
        }
    }
    cout<<ans;
    
}
