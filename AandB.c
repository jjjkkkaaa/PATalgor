#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  long int a, b;
  int A, B, count = 0, sumA =0, sumB = 0;
  scanf("%ld %d %ld %d", &a, &A, &b, &B);
  while (a) {
    if (a%10 == A) {
      count++;
    }
    a = a/10;
  }
  int i;
  for(i = 0; i < count; i++) {
    sumA += pow(10, i)*A;
  }
  count = 0;
  while (b) {
    if (b%10 == B) {
      count++;
    }
    b = b/10;
  }
  for(i = 0; i < count; i++) {
    sumB += pow(10, i)*B;
  }
  printf("%d", sumA + sumB);
  return 0;
}
