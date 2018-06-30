#include "stdio.h"
#include "math.h"
void my_sort(int a[], int n, int flag) {
  int i, j, tmp;
  if(flag > 0) {
    for(i = 0; i < n-1; i++) {
      for(j = i+1; j < n; j++) {
        if (a[i] < a[j]) {
          tmp = a[i];
          a[i] = a[j];
          a[j] = tmp;
        }
      }
    }
  } else {
    for(i = 0; i < n-1; i++) {
      for(j = i+1; j < n; j++) {
        if (a[i] > a[j]) {
          tmp = a[i];
          a[i] = a[j];
          a[j] = tmp;
        }
      }
    }
  }
}

int num(int a[], int n) {
  int sum = 0, i;
  for(i = 0; i < n; i++) {
    sum  = sum + a[i] * pow(10, 3-i);
  }
  return sum;
}

void p(int a[]) {
  int i = 0;
  for(i=0;i<4;i++) {
    printf("%d", a[i]);
  }
  printf("\n");
}

int main(int argc, char const *argv[]) {
  int n, buf[4] = {0}, large, small, res = 0;
  scanf("%d", &n);
  if(n%1111 == 0) {
    printf("%d - %d = 0000", n, n);
    return 0;
  }
  while(res != 6174) {
    int i;
    for(i = 0; i < 4; i++) {
      buf[i] = n % 10;
      n = n/10;
    }
    my_sort(buf, 4, 1);
    large = num(buf, 4);
    if(large < 10) {
      printf("000%d - ", large);
    }
    if(large < 100 && large >= 10) {
      printf("00%d - ", large);
    }
    if(large < 1000 && large >= 100) {
      printf("0%d - ", large);
    }
    if(large >= 1000) {
      printf("%d - ", large);
    }
    my_sort(buf, 4, -1);
    small = num(buf, 4);
    if(small < 10) {
      printf("000%d = ", small);
    }
    if(small < 100 && small >= 10) {
      printf("00%d = ", small);
    }
    if(small < 1000 && small >= 100) {
      printf("0%d = ", small);
    }
    if(small >= 1000){
      printf("%d = ", small);
    }
    res = large - small;
    printf("%d\n", res);
    n = res;
  }
  return 0;
}
