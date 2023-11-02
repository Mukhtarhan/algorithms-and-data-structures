#include<bits/stdc++.h>
using namespace std;


int main() {
	string  s;
	cin>>s;
	map<char,int> mp;
	int ans=0;
	mp['I']=1, mp['V']=5, mp['X']=10, mp['L']=50, mp['C']=100, mp['D']=500, mp['M']=1000;
	for(int i=0;i<s.size()-1;i++){
		char y = s[i+1];
		char x = s[i];
		if(mp[x]<mp[y]){
			ans-=mp[x];
			continue;
		}
		ans+=mp[x];
	}
	cout<<ans+mp[s[s.size()-1]];
    
}