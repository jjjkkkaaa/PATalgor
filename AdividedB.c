//计算A/B，其中A是不超过1000位的正整数，B是1位正整数。
//你需要输出商数Q和余数R，使得A = B * Q + R成立。
// 输入例子:
// 123456789050987654321 7
//
// 输出例子:
// 17636684150141093474 3
#include "stdio.h"
int main(int argc, char const *argv[]) {
  char A[1000] = {0};
  int B;
  scanf("%s %d", A, &B);
  int i, yu;
  while(A[i] != '\0') {
    int tmp = A[i] - '0';     //类型换
    if(yu != 0) {
      tmp = yu *10 + tmp;
    } else {
      if(tmp < B && i > 0) {
        printf("0");
        yu = tmp;
      }
    }
    if (tmp < B) {
      yu = tmp;
    }
    else if(tmp == B) {
      printf("1");
    } else {
      printf("%d", tmp/B);
      yu = tmp%B;
    }
    i++;
  }
  printf(" %d", yu);
  return 0;
}
