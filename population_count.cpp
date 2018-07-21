#include <iostream>
#include <string>
using namespace std;
struct P {
  string name;
  string bir;
};
int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  string s1 = "2014/09/06", s2 = "1814/09/06";
  int num = 0;
  string minbir, maxbir, minname, maxname;
  P p;
  for(int i = 0; i < n; i++) {
    cin >> p.name >> p.bir;
    if (p.bir.compare(s1) == 0 || p.bir.compare(s2) == 0 || (p.bir.compare(s1) < 0 && p.bir.compare(s2) > 0)) {
      num++;
      if (minbir.length() != 0) {
        minname = p.bir > minbir ? p.name : minname;
        minbir = p.bir > minbir ? p.bir : minbir;
      } else {
        minname = p.name;
        minbir = p.bir;
      }
      if (maxbir.length() != 0) {
        maxname = p.bir > maxbir ? maxname : p.name;
        maxbir = p.bir > maxbir ? maxbir : p.bir;
      } else {
        maxname = p.name;
        maxbir = p.bir;
      }
    }
  }
  cout << num << " " << maxname << " " << minname << endl;
  return 0;
}
