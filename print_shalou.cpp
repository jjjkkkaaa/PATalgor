#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  char c;
  cin >> n >> c;
  int lay = 1, last;
  n = n - 1;
  while(1) {
    int tmp = (2*(lay+1) - 1)*2;
    if (n == tmp) {
      last = 0;
      lay++;
      break;
    }
    if (n < tmp) {
      last = n;
      break;
    }
    n -= tmp;
    lay++;
  }
  for(int i = lay; i>=1; i--){
    for(int j = 0; j < lay-i; j++) cout << " ";
    for(int k =0; k < (2*lay-1)-(lay-i)*2;k++) cout << c;
    cout << endl;
  }
  for(int i = 2; i <= lay; i++) {
    for(int j = 0; j < lay-i; j++) cout << " ";
    for(int k =0; k < (2*lay-1)-(lay-i)*2;k++) cout << c;
    cout << endl;
  }
  cout << last << endl;
  return 0;
}
