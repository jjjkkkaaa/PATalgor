#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(int argc, char const *argv[]) {
  string right, wrong;
  std::set<char> s;
  cin >> right >> wrong;
  for(int i = 0,j = 0; i < right.length(); i++) {
    if (right[i] == wrong[j]) {
      j++;
      continue;
    } else {
      if (right[i] >= 97 && right[i] <= 122) {
        right[i] -= 32;
      }
      if (s.find(right[i]) == s.end()) {
        s.insert(right[i]);
        cout << right[i];
      }
    }
  }
  return 0;
}
