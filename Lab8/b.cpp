#include<bits/stdc++.h>
using namespace std;
int countFreq(string& pat, string& txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        /* For current index i, check for
           pattern match */
        int j;
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;
 
        // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        if (j == M) {
            res++;
        }
    }
    return res;
}
int main(){
    string s, t, par;
    cin>>s>>t>>par;
    int cnt=0;
    int size = par.size();
    for(int i=0;i<s.size();i++){
        string st, st2;
        for(int j=i;j<i+size;j++){
            st+=s[j];
            st2+=t[j];
        }
        if(st==st2 && st==par){
            cnt++;
        }
    }
    cout<<cnt;
}