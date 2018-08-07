#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) {
  char check[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
  int weight[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
  int n, pos = 0, num = 0;
  string id;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> id;
    int wrong = 0;
    for(int j = 0; j < 17; j++) {
      if (id[j] < 48 || id[j] > 57) {
        wrong = 1;
        num++;
        cout << id << endl;
        break;
      } else {
        pos += (id[j]-'0')*weight[j];
      }
    }
    if (id[17] != check[pos % 11] && !wrong) {
      cout << id << endl;
      num++;
    }
  }
  if (!num) {
    cout << "All passed" << endl;
  }
  return 0;
}
