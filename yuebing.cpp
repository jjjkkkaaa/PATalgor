#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <iomanip>
struct Yue
{
  int store;
  double price;
  int tol;
};
bool mycompare(Yue y1, Yue y2)
{
  return y1.price > y2.price;
}
int main(int argc, char const *argv[]) {
  int N, D;     //月饼种类， 市场需求量
  cin >> N >> D;
  vector<Yue> v;       //存储月饼的需求量
  for(int i = 0; i < N; i++) {
    Yue yue;
    cin >> yue.store;
    v.push_back(yue);
  }
  for(int j = 0; j < N; j++) {
    int tmp;
    cin >> tmp;
    v[j].tol = tmp;
    v[j].price = (double)tmp / (double)v[j].store;
  }
  sort(v.begin(), v.end(), mycompare);  //ok
  double res = 0;
  int k = 0;
  while(1){
    if (D <= v[k].store) {
      res += D*(v[k].price);
      break;
    }
    res += v[k].tol;
    D -= v[k].store;
    k++;
  }
  cout<<setiosflags(ios::fixed)<<setprecision(2)<<res<<endl;
  return 0;

}
