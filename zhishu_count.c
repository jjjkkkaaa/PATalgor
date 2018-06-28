#include <stdio.h>
//输出第m到第n个质数
//找到第m个质数，count计数  control控制换行符
int main()
{
    int m, n, count=0, control=0;
    scanf("%d %d", &m, &n);
    int tmp = 2;      //每次判断tmp是不是质数
    while(count != m) {
      int i, flag=1;
      for(i=2; i <= tmp/2; i++) {
        if(tmp%i == 0) {
          flag = 0;
          break;
        } //不是质数
      }
      if (flag) {
        count++;
      }
      tmp++;
    }   //找到第m个质数
    control++;
    printf("%d ", tmp-1); //输出开始
    while(control != (n-m+1)) {
      int i, flag=1;
      for(i=2; i <= tmp/2; i++) {
        if(tmp%i == 0) {
          flag = 0;
          break;
        } //不是质数
      }
      if (flag) {
        count++;
        control++;
        printf("%d ", tmp);
        if (control % 10 == 0) {
          printf("\b");
        }
      }
      tmp++;
    }
    if(control%10 != 0){
        printf("\b");
    }
    return 0;
}
