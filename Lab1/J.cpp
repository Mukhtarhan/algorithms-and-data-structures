#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque <int> dq;
    char k;
    int a;      
    while(cin >> k)
    {
        if(k == '+')
        {
            cin >> a;
            dq.push_front(a);
        }
        else if(k == '-')
        {
            cin >> a;
            dq.push_back(a);
        }
        else if(k == '*')
        {
            if(dq.empty())
            {
                cout << "error" << endl;
            }
            else
            {
                int n = dq.front() + dq.back(); 
                dq.pop_front();
                if(dq.empty() == false)
                {
                    dq.pop_back();
                }
                cout << n << endl;
            }                                       
        }

        if(k == '!')
        {
            return 0;
        }
    }                                   
}
