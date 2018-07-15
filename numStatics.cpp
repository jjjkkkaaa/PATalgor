#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Num
{
  char num;
  int times;
};
bool mycompare(Num n1, Num n2)
{
  return n1.num < n2.num;
}
int main(int argc, char const *argv[]) {
  string s1;
  cin >> s1;
  vector<Num> v;
  for(int i = 0; i < s1.size(); i++) {
    if (v.size() == 0) {
      Num n = {s1[i], 1};
      v.push_back(n);
      continue;
    }
    for(vector<Num>::iterator it = v.begin(); it != v.end(); it++) {
      if (s1[i] == it->num) {
        it->times++;
        break;
      }
      if(it == v.end()-1 && s1[i] != it->num) {
        Num n = {s1[i], 1};
        v.push_back(n);
        break;
      }
    }
  }
  sort(v.begin(), v.end(), mycompare);
  for(vector<Num>::iterator it = v.begin(); it != v.end(); it++) {
    cout << it->num << ":" << it->times << endl;
  }
  return 0;
}
