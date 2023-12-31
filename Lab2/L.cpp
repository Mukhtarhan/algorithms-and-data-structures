# include <iostream>
# include <algorithm>
# include <cassert>
 
using namespace std;
 
struct Node {
  int val;
  Node *next;
 
  Node() {
    val = 0;
    next = NULL;
  }
 
};
 
int findMaxSum(int n, Node *head) {
	// Implement this function
  int mx = -20000, curm = 0;
    Node* tmp = head;
    while(tmp){
        curm += tmp->val;
        if(mx < curm)mx = curm;
        if(curm < 0)curm = 0;
        tmp = tmp->next;
    }

    return  mx;
	
  }

   
int main() {
  int n;
  cin >> n;
 
  Node *head, *tail;
  for (int i = 1; i <= n; ++i) {
    int x;
    cin >> x;
    Node *cur = new Node();
    cur -> val = x;
 
    if (i == 1) {
      head = tail = cur;
    } else {
      tail -> next = cur;
      tail = cur;
    }
  }
  // 1 2
 
  cout << findMaxSum(n, head) << "\n";
  return 0;
}