#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
  int arr[10];
  vector<int> v;
  for(int i =0; i < 10; i++){
    cin >> arr[i];
    for(int j = 0; j < arr[i]; j++){
      v.push_back(i);
    }
  }
  sort(v.begin(), v.end());
  int n = 0;
  for(int i = 0; i < v.size(); i++){
    if (v[i] != 0) {
      break;
    }
    n++;
  }
  if (n) {
    v.insert(v.begin(), v[n]);
    v.erase(v.begin()+n+1);
  }
  for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    cout << *it;
  }
  return 0;
}
