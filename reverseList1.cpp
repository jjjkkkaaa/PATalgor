#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <list>
using namespace std;
struct Node
{
  string add;
  int data;
  string next;
  bool operator == (const Node & tmp) {
    if(add == tmp.next) return true;
    return false;
  }
};
int main(int argc, char const *argv[]) {
  list<Node> l;
  vector<Node> v2;
  int n, k;
  string a;
  cin >> a >> n >>k;
  for(int i = 0; i < n; i++) {
    Node node;
    cin >> node.add >> node.data >> node.next;
    if (node.next == "-1") {
      l.push_back(node);
      continue;
    }
    list<Node>::iterator it = find(l.begin(), l.end(), node);
    if (it != l.end()) {
      l.insert(it, node);
    } else {
      l.insert(l.begin(), node);
    }

  }
  v2.assign(l.begin(), l.end());
  for(int i = k - 1; i >= 0; i--) {
    if (i == 0) {
      v2[i].next = v2[k].add;
      cout << v2[i].add <<" "<< v2[i].data <<" "<< v2[i].next << endl;
      continue;
    }
    v2[i].next = v2[i-1].add;
    cout << v2[i].add <<" "<< v2[i].data <<" "<< v2[i].next << endl;
  }
  if (n-k >=k) {
    for(int i = n - 1; i >= k; i--) {
      if (i == k) {
        v2[i].next = "-1";
      }
      v2[i].next = v2[i-1].add;
      cout << v2[i].add <<" "<< v2[i].data <<" "<< v2[i].next << endl;
    }
  } else {
    for(int i = k; i < n; i++) {
      cout << v2[i].add <<" "<< v2[i].data <<" "<< v2[i].next << endl;
    }
  }
  return 0;
}
