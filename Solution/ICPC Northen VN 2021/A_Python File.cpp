#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    if(tolower(s[0])=='y'&&tolower(s[1])=='p'&&s[2]=='.'){
        cout<<"yes"<<"\n";
    }
    else{
        cout<<"no"<<"\n";
    }
}
