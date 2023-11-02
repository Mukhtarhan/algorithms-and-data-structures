#include<iostream>
#include<string>
using namespace std;
int sak=0, kat=0;
string check(string st){
    
    string s;
    if(st.size()==1){
        if(st[0]=='S')return "SAKAYANAGI";
        if(st[0]=='K')return "KATSURAGI";
    }
    if(st.size()>1){
        int winner=0, winner2=0;
        for(int i=0;i<st.size();i++){
            if(st[i]=='S'){
                winner=1;
            }
            if(st[i]=='K'){
                winner2=1;
            }
        }
        if(winner>winner2)return "SAKAYANAGI";
        if(winner2>winner)return "KATSURAGI";
    }
    for(int i=0;i<st.size();i++){
        if(st[i]=='S' && sak==0){
            kat++;
            s+=st[i];
            continue;
        }
        if(st[i]=='S' && sak>0){
            sak-=1;
            continue;
        }
        if(st[i]=='K' && kat==0){
            sak++;
            s+=st[i];
            continue;
        }
        if(st[i]=='K' && kat>0){
            kat-=1;
            continue;
        }
    }
    return check(s);
}

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    cout<<check(s);
    
    return 0;
}