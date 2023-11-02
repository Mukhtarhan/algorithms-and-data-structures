#include<iostream>
#include<algorithm> 
#include<deque>
using namespace std;
int main(){
    int n;cin>>n;
    bool back=true;
    
    deque <int> v;
    while(n--){
        int x;
        cin>>x;
        if(x==1){
            int a;
            cin>>a;
            if(back)v.push_back(a);
            else v.push_front(a);
        }
        else{
            if(back)back=false;
            else back=true;
        }

    }
    while (!v.empty())
    {
        if(back==false){
            cout<<v.back()<<" ";
            v.pop_back();
            continue;
        }
        else{
            cout<<v.front()<<" ";
            v.pop_front();
            continue;
        }
    }
    

}