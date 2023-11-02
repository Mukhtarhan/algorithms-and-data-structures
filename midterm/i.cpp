#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    while(n--){
        long long x;
        int cnt=0;
        cin>>x;
        while(x>0){
            int bin=x%2;
            x=x/2;
            if(bin==1){
                cnt--;
                if(cnt<0){
                    cnt=-1;
                    break;
                }
            }
            else{
                cnt++;
            }
        }
        if(cnt==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}