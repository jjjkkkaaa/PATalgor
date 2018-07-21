#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
  int N, P;
  cin >> N >> P;
  std::vector<int> v;
  for(int i = 0; i < N; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int min = v[0], max = v[N-1];
  // max <= min*p
  return 0;
}
