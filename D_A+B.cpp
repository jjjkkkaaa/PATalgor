#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
  int A, B, D;
  cin >> A >> B >> D;
  int tar = A + B;
  vector<int> v;
  while (tar) {
    v.push_back(tar % D);
    tar /= D;
  }
  reverse(v.begin(), v.end());
  for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    cout << *it;
  }
  return 0;
}
