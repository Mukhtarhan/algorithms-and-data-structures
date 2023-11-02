#include <iostream>
using namespace std;

struct Heap
{               
    int *a;
    int size;

    Heap(int memory)
    {
        a = new int[memory];
        size = 0;
    }

    void push(int &k)
    {
        size++;
        a[size] = k;
        sift_up(size);
    }                 

    int parent(int i)
    {
        return i / 2;
    }

    int sonleft(int &i)
    {
        return i * 2;
    }

    int sonright(int &i)
    {
        return i * 2 + 1;
    }

    void sift_up(int i)
    {
        while(i > 1 and a[parent(i)] < a[i])
        {                       
            swap(a[parent(i)] , a[i]);
            i = parent(i);
        }
    }  

    void check(int i , int &cnt)
    {          
        while(sonright(i) < size + 1 && sonleft(i) < size)
        {
            if(a[sonright(i)] > a[sonleft(i)])
            {               
                cnt++;
            }
            i++;
        }
        cout << cnt;
    }                          
};              
int main()
{
    int n;
    cin >> n;
    Heap heap(n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        heap.push(arr[i]);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int a, b;
        cin>>a>>b;
        
    }
}