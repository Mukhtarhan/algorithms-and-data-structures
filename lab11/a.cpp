#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    long long sum=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    for(int i=0;i<m;i++){
        int l, r, c;
        cin>>l>>r>>c;
        for(int j=l-1;j<r-1;j++){
            if(a[j]==0){
                a[j]=c;
                sum+=a[j];
            }
            else if(a[j]>c){
                sum-=a[j];
                a[j]=c;
                sum+=a[j];
            }
        }
        
    }
    cout<<sum<<" "<<a[n];
}