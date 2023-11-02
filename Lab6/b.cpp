#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v,v2;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
        v2.push_back(a[i]);
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
        for(int j=0;j<v2.size();j++){
            if(b[i]==v2[j]){
                v.push_back(b[i]);
                v2.erase(v2.begin()+j);
                break;
            }
            
        }
    }
    sort(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}