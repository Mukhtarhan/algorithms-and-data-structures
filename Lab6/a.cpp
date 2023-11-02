#include<bits/stdc++.h>
using namespace std;
void quickSort(string &str, int left, int right) {
          int i = left, j = right;
          int mid = str[(left + right) / 2];

          /* partition */
          while (i <= j) {
                while (str[i] < mid)
                      i++;
                while (str[j] > mid)
                      j--;
                if (i <= j) {
                      swap(str[i], str[j]);
                      i++; j--;
                }
          };

          /* recursion */
          if (left < j)
                quickSort(str, left, j);
          if (i < right)
                quickSort(str, i, right);
    }
int main(){
    int x;
    cin>>x;
    string s,st1,st2;
    cin>>s;
    int end=s.size();
    for(int i=0;i<x;i++){
        if(int(s[i])==97 || int(s[i])==101 || int(s[i])==111 || int(s[i])==117 || int(s[i])==105){
            st1+=s[i];
        }
        else{
            st2+=s[i];
        }
    }
    quickSort(st1,0,st1.size()-1);
    quickSort(st2,0,st2.size()-1);
    for(int l=0; l<st1.size(); l++){
            cout<<st1[l];
    }
    for(int l=0; l<st2.size(); l++){
        cout<<st2[l];
    }
}