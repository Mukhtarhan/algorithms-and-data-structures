#include <bits/stdc++.h>

using namespace std;
class heap{
    vector<long long> a;
    public:
        int getSize(){
            return a.size();
        }

        long long parent(long long i){ 
            return (i - 1) / 2;
        }

        long long left(long long i) {
            return 2 * i + 1;
        }

        long long right(long long i) {
            return 2 * i + 2;
        }

        void sift_up(long long i) {
            while (i >= 0 && a[parent(i)] < a[i]) {
                swap(a[i], a[parent(i)]);
                i = parent(i);
            }
        }

        void insert(long long x){
            a.push_back(x);
            long long last_i = a.size() - 1;
            sift_up(last_i); 
        }

        void heapify(long long i) {
            long long last_i = a.size() - 1;
            if (left(i) > last_i) {
                return;
            }
            long long j = left(i);
            if (right(i) <= last_i && a[left(i)] < a[right(i)]) {
                j = right(i);
            }
            if (a[i] < a[j]) {
                swap(a[i], a[j]);
                heapify(j);
            }
        }


        long long get_max() {
            return a[0];
        }

        long long extract_max() {
            long long max = get_max();
            swap(a[0], a[a.size() - 1]);
            a.pop_back();
            if (a.size() > 0) {
                heapify(0);
            }
            return max;
        }
};

long long solve(heap *H){
    while(1){
        int a = H->extract_max();
        int b = H->extract_max();
        if(a != b)H->insert(a-b);
        if(H->getSize() < 2)break;
    }

    return (H->getSize() == 0 ? 0 : H->get_max());
}

int main(){
    long long n;
    heap *H = new heap();

    cin >> n;
    for(int i = 0; i < n; i++){
        long long x;cin >> x;
        H->insert(x);
    }
    // cout << H->extract_max();
    printf("%d", solve(H));  

    return 0;
}