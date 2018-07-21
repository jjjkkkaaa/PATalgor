#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int c1, c2;
  cin >> c1 >> c2;
  int _time = (c2 - c1) / 100;
  if((c2 - c1) % 100 >= 50) _time++;
  printf("%02d:%02d:%02d\n",_time / 3600, (_time%3600) / 60, (_time%3600)%60);
  return 0;
}
