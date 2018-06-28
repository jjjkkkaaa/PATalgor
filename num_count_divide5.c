#include <stdio.h>
#include <stdlib.h>
//测试用例:
//8 1 2 4 5 6 7 9 16
//对应输出应该为:
//N 11 2 N 9
//你的输出为:
//N N N 8.0 N
int main(void) {
    int a1, a2, a3, a5, N, m, n;
    a1 = a2 = a3 = a5 = N = m = n = 0;
    double a4 = 0;
    scanf("%d", &N);
    int *p = (int *)malloc(N * sizeof(int));
    int i;
    for(i = 0; i < N; i++) {
        scanf("%d", &p[i]);
        if(p[i]%5 == 0 && p[i]%2 == 0){a1 += p[i];}
        if(p[i]%5 == 1){
            if(m%2 == 0) a2 += p[i];
            else a2 -= p[i];
            m++;
        }
        if(p[i]%5 == 2){a3++;}
        if(p[i]%5 == 3){
            a4 += p[i];
            n++;
        }
        if(p[i]%5 == 4){
            if(p[i] > a5) a5 = p[i];
        }
    }
    if(a1){
        printf("%d ", a1);
    } else{
        printf("N ");
    }
    if(m){
        printf("%d ", a2);
    } else{
        printf("N ");
    }
    if(a3){
        printf("%d ", a3);
    } else{
        printf("N ");
    }
    if(n){
        printf("%.1lf ", a4);
    } else{
        printf("N ");
    }
    if(a5){
        printf("%d", a5);
    } else{
        printf("N");
    }
    return 0;
}
