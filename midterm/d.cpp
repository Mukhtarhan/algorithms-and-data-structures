#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
bool isPrime (int a){
    for (int i=2;i<=sqrt(a);i++){
        if (a%i==0)return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int ans = 0 ;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            if (isPrime (i))ans++;
            if (isPrime(n/i) && n/i != i)ans++;
        }
    }
    cout<<ans;
}