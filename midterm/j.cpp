#include <iostream>
#include <algorithm>
using namespace std;
bool check(int size , int k , long long *arr, int num , int a)
{
    int l = 0;
    int r = size;
    while(l + 1 < r)
    {
        int mid = (r + l) / 2;
        if(arr[mid] <= k)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    if(arr[l] + a == num)
    {
        return true;
    }
    return false;
}

int main()
{
    int n , size;
    cin >> n>> size;
    long long arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        cin >> arr[i];
    }

    sort(arr , arr + size);

    for(int i = 0 ; i < size ; i++)
    {           
        int k = n - arr[i];
        if(check(size , k , arr , n , arr[i]) == true)
        {                               
            cout << arr[i] << " " << k;
            return 0;
        }
    }                                                                       
}