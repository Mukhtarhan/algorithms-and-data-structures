#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string st, st2;
	
	
	while(n--){
		int mx=0,mn=1000;
		int k,n,t=1,last=0;
		cin>>k>>n;
		for(int i=1;i<=k;i++){
			if(last+t+(k-i)<=n){
				cout<<last+t<<" ";
				last=last+t;
				t+=1;
				continue;
			}
			cout<<last+1<<" ";
			last+=1;
		}
		cout<<endl;
	}
	
	
}