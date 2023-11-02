#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,min=100,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(min>a[i]){
            min=a[i];
        }
    }
    sort(a,a+n);
    for(int i=1;i<n;i++){
        
    }
    cout<<(n-1)*min+sum-min;
}