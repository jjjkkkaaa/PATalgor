#include "stdio.h"
char most(int a, int b, int c) {
  int tmp = b >= a ? b : a;
   if(tmp >= c){
     if (tmp == b) {
       return 'B';
     } else {
       return 'C';
     }
   }
   if(tmp < c) {return 'J';}
   return 0;
}
int main(int argc, char const *argv[]) {
  int N;
  scanf("%d", &N);
  char a[105], b[105];
  int i, win = 0, lose = 0, equal = 0, c, _b, j, c1, b1, j1;
  c=_b=j=c1=b1=j1=0;
  for(i = 0; i < N; i++) {
    scanf("\n");
    scanf("%c %c", a+i, b+i);
    if((a[i] == 'C' && b[i] == 'J') || (a[i] == 'J' && b[i] == 'B') || (a[i] == 'B' && b[i] == 'C')) {
      win++;
      switch (a[i]) {
        case 'C': c++;break;
        case 'B': _b++;break;
        case 'J': j++;break;
      }
    }
    if((a[i] == 'C' && b[i] == 'C') || (a[i] == 'J' && b[i] == 'J') || (a[i] == 'B' && b[i] == 'B')) {
      equal++;
    } else if((b[i] == 'C' && a[i] == 'J') || (b[i] == 'J' && a[i] == 'B') || (b[i] == 'B' && a[i] == 'C')) {
      lose++;
      switch (b[i]) {
        case 'C': c1++;break;
        case 'B': b1++;break;
        case 'J': j1++;break;
      }
    }
  }
  printf("%d %d %d\n", win, equal, lose);
  printf("%d %d %d\n", lose, equal, win);
  printf("%c %c", most(c, _b, j), most(c1, b1, j1));
  return 0;
}
