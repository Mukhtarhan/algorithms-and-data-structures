#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n, data, pos;
    cin>>n;
    int a[n];
    vector <int> q;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>data;
    cin>>pos;

    for(int i=0;i<n;i++){
        if(i==pos){
            q.push_back(data);
        }
    
        q.push_back(a[i]);
        
    }

    for(int i=0;i<n+1;i++){
        cout<<q[i]<<" ";
    }
}