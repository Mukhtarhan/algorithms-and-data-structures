#include<iostream>
using namespace std;
int binarysearch(int a[],int target,int size){
    int l=0;
    int r=size;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==target){
            return mid;
        }
        else if(a[mid]<target){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return l;
}
int main(){     
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<i+1-binarysearch(a,a[i]-3000,i)<<" ";
    }
}