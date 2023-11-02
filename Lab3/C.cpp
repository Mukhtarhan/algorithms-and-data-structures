#include <iostream>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int e[n];
    for (int i=0;i<n;i++){
        cin>>e[i];
    }
    while (q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int cnt = 0;
        for (int i=0;i<n;i++){
            if (e[i]>=a && e[i]<=b){
                cnt ++;
            }else if (e[i]>=c && e[i] <=d){
                cnt++;
            }
        }
        cout <<cnt <<endl;
    }
}