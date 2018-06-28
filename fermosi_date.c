// 3485djDkxh4hhGE
//
// 2984akDfkkkkggEdsb
//
// s&hgsfdk
//
// d&Hyscvnm
//
// 输出例子:
// THU 14:04
// 两对字符串，第一对得出星期几和小时（字符本身），第二对得出分钟数（位置）
#include "stdio.h"
#include "string.h"
int main(int argc, char const *argv[]) {
  char a[61],b[61], c[61], d[61];
  scanf("%s", a);
  scanf("%s", b);
  scanf("%s", c);
  scanf("%s", d);
  int i = 0;
  while(a[i] != b[i] || a[i] < 57){
    i++;
  }
  char* day;
  int hour, min;
  switch (a[i]) {
    case 'A': day = "MON";break;
    case 'B': day = "TUE";break;
    case 'C': day = "WED";break;
    case 'D': day = "THU";break;
    case 'E': day = "FRI";break;
    case 'F': day = "SAT";break;
    case 'G': day = "SUN";break;
  }
  i++;
  while(a[i] != b[i]){
    i++;
  }
  if(a[i]>=48 && a[i]<= 57){
    hour = a[i]-48;
  } else {
    hour = a[i] - 55;
  }
  i = 0;
  while(1){
    if (c[i] == d[i] && (c[i] >= 65 && c[i] <= 90 || c[i] >= 97 && c[i] <= 122)) {
      break;
    }
    i++;
  }
  min = i;
  printf(hour > 9 ? "%s %d:":"%s 0%d:", day,hour);
  printf(min > 9 ? "%d\n":"0%d\n", min);
  return 0;
}
