#include<iostream>
#include<deque>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    deque <int> d;  
    for(int i=0;i<n;i++){
        cin>>a[i];
        if((i+1)%2!=0){
            d.push_back(a[i]);
        }
    }
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
}