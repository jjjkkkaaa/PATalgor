#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int score_arr[100000] = {0};
  int n, num, grade, flag = 0;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> num >> grade;
    score_arr[num] += grade;
    if (num > flag) {
      flag = num;
    }
  }
  int max_score = 0, max_num = 0;
  for(int j = 0; j <= flag; j++) {
    if (score_arr[j] > max_score) {
      max_score = score_arr[j];
      max_num = j;
    }
  }
  cout << max_num << " " << max_score << endl;
  return 0;
}
