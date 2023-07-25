#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int x,n;
    cin>>x>>n;
    multiset<int>a1,a2;
    a1.insert(0);
    a1.insert(x);
    a2.insert(x);
    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    	set<int>::iterator it = a1.upper_bound(x);
    	int up=*it,lo=*(--it);
    	set<int>::iterator it1 = a2.find(up-lo);
    	a1.insert(x);
    	a2.erase(it1);
    	a2.insert(up-x);
    	a2.insert(x-lo);
    	cout<<*a2.rbegin()<<"\n";
	}
}
