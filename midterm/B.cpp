#include<iostream>
#include<cmath>
using namespace std;
bool isprime(long long q){
    for(long long i=2;i<=sqrt(q);i++){
        if(q%i==0)return false;
    }
    return true;
}
int main(){
    long long n;
    cin>>n;
    for (int i=2;i<n-1;i++){
        if (isprime(i)){
            if (isprime(n-i)){
                cout <<i <<" "<< n-i<<endl;
                return 0;
            }
        }
    }
}