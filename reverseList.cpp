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
  reverse(v2.begin(), v2.begin() + k);
  if (v2.size()/2 >= k) {
    reverse(v2.begin() + k, v2.end());
  }
  for(vector<Node>::iterator it = v2.begin(); it != v2.end(); it++) {
    it->next = (it+1)->add;
    if (it == v2.end() - 1) {
      it->next = "-1";
    }
    cout << it->add <<" "<< it->data <<" "<< it->next << endl;
  }
  return 0;
}
