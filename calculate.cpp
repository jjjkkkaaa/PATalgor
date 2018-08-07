#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[]) {
  string num_one, num_two;
  cin >> num_one >> num_two;
  int i_one, f_one, i_two, f_two;
  sscanf(num_one.c_str(), "%d/%d", &i_one, &f_one);
  sscanf(num_two.c_str(), "%d/%d", &i_two, &f_two);
  int k_one = i_one/f_one;
  f_one = i_one%f_one;
  int k_two = i_one/f_two;
  f_two = i_one%f_two;
  return 0;
}
