#include<iostream>
#include<set>
#include<vector>
using namespace std;
int max_dub=0;
vector <int> v;
void check(int a[], int b, int ind){
    int cnt=0;
    for(int i=0;i<ind;i++){
        if(a[i]==b){
            cnt++;
        }
    }
    if(cnt>max_dub){
        max_dub=cnt;
        v.erase(v.begin(),v.end());
        v.push_back(b);
    }
    if(cnt==max_dub){
        v.push_back(b);
    }
    
}

int main(){
    set <int> s;
    vector <int> v2;
    int n;
    cin>>n; 
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        check(a, a[i], i);
    }
    for(int i=0;i<v.size();i++){
        s.insert(v[i]);
    }
     set<int>::reverse_iterator rit;  
    for (rit=s.rbegin(); rit!=s.rend(); ++rit){  
        cout << *rit<< ' ';
    }
}