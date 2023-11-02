#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int main(){
    int n, m;
    deque <string> d;
    vector <string> v;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        
        if(i>=m){
            d.push_back(s);
        }
        else{
            v.push_back(s);
        }

    }
    
     for(int i=0;i<m;i++){
        
            d.push_back(v[i]);
        
    
    }
    for(int i=0;i<n;i++){
        if(i<m){
            d.push_back(v[i]);
        }
        cout<<d[i]<<" ";
    }
    return 0;
}