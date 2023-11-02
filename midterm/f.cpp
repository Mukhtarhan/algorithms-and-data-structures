#include<bits/stdc++.h>
using namespace std;
struct tree {
    tree *left;
    tree *right;
    int value;

    tree(int value){
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }

    void insert (int value){
        if (this->value > value){
            if (this->left == NULL){
                this->left = new tree(value); 
            }else {
                this->left->insert(value);
            }
        }else {
            if (this->right == NULL){
                this->right = new tree(value);
            }else {
                this->right->insert(value);
            }
        }
    }
    int result (int lvl){
        int cnt = 0;
        if (this->left != NULL){
            cnt += this->left->result(lvl+1);
        }
            
        if (this->right != NULL){
            cnt += this->right->result(lvl+1);
        }
        return cnt + this->value - lvl;
    }
};
int main(){ 
    int n;
    cin>>n;
    int h;
    cin>>h;
    tree r = tree(h);
    for (int i=1;i<n;i++){
        cin>>h;
        r.insert(h);
    }
    cout << r.result(0);
}