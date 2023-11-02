#include<iostream>
using namespace std;

int main(){
    int n, k, near = 10000, ind = 0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>k;
    for(int i=0;i<n;i++){
        if(abs(k-a[i])<near){
            near = abs(k-a[i]);
            ind = i;
        }
    }
    cout<<ind;
}