#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;   
    cin>>n;
    string s;
    
    for(int i=0;i<=n;i++){
        multimap<int,string> mp;
        vector<string> v;
        getline(cin,s);
        if(i==0)continue;
        string st;
        for(int i = 0; i< s.length(); i++){
            if(i==s.size()-1){
                st+=s[i];
                mp.insert(pair<int,string>(st.size(),st));
            }
            if(s[i]!=' '){
                st+=s[i];
            }
            else{
                mp.insert(pair<int,string>(st.size(),st));
                st="";
           }
        }
        multimap<int,string> :: iterator it = mp.begin();
        for (int i = 0; it != mp.end(); it++, i++) {
            cout<<it->second<<" ";
        }
        
        cout<<endl; 
    }

}