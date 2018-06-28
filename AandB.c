#include "stdio.h"
##include "math.h"
int main(int argc, char const *argv[]) {
  long int a, b;
  int A, B, count = 0;
  scanf("%ld %d %ld %d", &a, &A, &b, &B);
  while (a/10) {
    if (a == A) {
      count++;
    }
    a = a%10;
  }
  return 0;
}
