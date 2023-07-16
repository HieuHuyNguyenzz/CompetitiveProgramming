#include <bits/stdc++.h>
 
using namespace std;
int main() {
    
    set<string>a;
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	string s1=s;
	while(next_permutation(s1.begin(),s1.end())){
		a.insert(s1);
	}
	cout<<a.size()+1<<"\n";cout<<s<<"\n";
	for(auto i:a){
		cout<<i<<"\n";
	}
	
    return 0;
}
