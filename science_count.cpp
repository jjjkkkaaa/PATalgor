#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(int argc, char const *argv[]) {
  string s, s1;
  cin >> s;
  int pos = s.find('.'), pose = s.find('E');
  s1 = s.substr(1, pos - 1);
  s1 += s.substr(pos + 1, pose - pos -1);
  int a;    //指数
  stringstream ss;
  ss << s.substr(pose + 2);
  ss >> a;
  if (s[pose + 1] == '+') {
    int dis = pose - pos - 1;
    if (a < dis) {
      s1.insert(pos + a - 1, ".");
    } else  if(a > dis) {
      for(int i = 0; i < a - dis; i++) s1.append("0");;
    }
  } else {
    for(int i = 0; i < a; i++) s1.insert(0, "0");
    s1.insert(1, ".");
  }
  //获取指数
  cout<< (s[0] == '+' ? "" : "-") + s1;
  return 0;
}
