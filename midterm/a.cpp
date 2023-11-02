#include <iostream>
#include <algorithm>
using namespace std;

struct node
{
    int val;
    node * left;
    node * right;
    node(int x)
    {
        val = x;
        left = right = NULL;
    }
};

int cnt = 0;
int arr[100000];

class BST
{
private:

    node * push(node * cur , int x)
    {
        if(cur == NULL)
        {
            return new node(x);
        }

        if(x < cur -> val)
        {
            cur -> left = push(cur -> left , x);
        }

        if(x > cur -> val)
        {
            cur -> right = push(cur -> right , x);
        }

        return cur;
    }

public:
    node * root;

    BST()
    {
        root = NULL;
    }

    void push(int x)
    {
        root = push(root , x);
    }

    node * getlink()
    {
        return root;
    }

    void triangle(node * cur){
        if (cur == NULL)
        {           
            return;
        }                                           
        int L = toLeft(cur -> left);
        int R = toRight(cur -> right);
        int cnt = min(L, R);
        for (int i = 1; i <= cnt; i ++)
        {
            arr[i]++;
        }
        triangle(cur -> left);
        triangle(cur -> right);
    }

    void print(int n)
    {
        for(int i = 1 ; i < n; i++)
        {
            cout << arr[i] << " ";   
        }
    }

    int toLeft(node * cur)
    {
        if (cur == NULL)
        {               
            return 0;
        }
        return toLeft(cur -> left) + 1;
    }

    int toRight(node * cur)
    {                       
        if (cur == NULL)
        {
            return 0;
        }
        return toRight(cur -> right) + 1;
    }                      
};      

int main()
{
    BST tree;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
        tree.push(arr[i]);
    }
    tree.triangle(tree.getlink());
    tree.print(n);
}