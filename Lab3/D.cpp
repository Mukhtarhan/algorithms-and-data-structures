#include<bits/stdc++.h>
using namespace std;
int a[100000];
int check(int cur){
    if(a[cur]!=a[cur+1])return cur;
    else check(cur+1);
}
int check2(int cur){
    if(a[cur]!=a[cur-1])return cur;
    else check2(cur-1);
}
int binary_search_upp(int target, int n){
    int low = 1;
    int high = n;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(a[mid]==target){
            return check(mid);
        }
        else if(a[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}
int binary_search_lower(int target, int n){
    int low = 1;
    int high = n;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(a[mid]==target){
            return check2(mid);
        }
        else if(a[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}

int main(){
    int n, q;
    
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a,a+1);
    for(int i=0;i<q;i++){
        int l1,r1,l2,r2;
        int ans, ans2;
        cin>>l1>>r1>>l2>>r2;
        ans=binary_search_upp(r1,n)-binary_search_lower(l1,n);
        ans2=binary_search_upp(r2,n)-binary_search_lower(l2,n);
        // cout<<ans+ans2<<endl;
        cout<<binary_search_upp(r1,n)<<binary_search_lower(l1,n)<<binary_search_upp(r2,n)<<binary_search_lower(l2,n)<<endl;
    }

}