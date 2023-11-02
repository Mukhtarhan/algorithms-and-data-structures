#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max=0;
    cin>>n;
    stack<int> st;
    vector<int> v;
    while(n--){
        string s;
        cin>>s;
        if(s=="add"){
            int a;
            cin>>a;
            v.push_back(a);
            st.push(a);
            if(a>max){
                max=a;
            }
        }
        if(s=="delete"){
            if(st.empty()){continue;}
            if(st.top()==max){
                st.pop();
                v.pop_back();
                max=0;
                for(int i=0;i<v.size();i++){
                    if(v[i]>max){
                        max=v[i];
                    }
                }
                continue;
            }
            st.pop();
            v.pop_back();
        }
        if(s=="getmax"){
            if(st.empty()) cout<<"error"<<endl;
            else cout<<max<<endl;
        }
        if(s=="getcur"){
            if(st.empty()) cout<<"error"<<endl;
            else cout<<st.top()<<endl;
        }

    }
}