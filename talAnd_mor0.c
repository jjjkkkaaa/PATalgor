//输入考生人数 最低录取分数线（两项分数均不低于）   优先录取分数线（两项均不低于）
#include "stdio.h"
#include "stdlib.h"
typedef struct
{
  int id;
  int moral;
  int talent;
  int type;
} stu;

int main(int argc, char const *argv[]) {
  int N, l, h, M = 0;
  scanf("%d %d %d", &N, &l, &h);
  stu* p = NULL;    //结构体数组
  stu tmp;
  int i, pos,j;
  //输入,把符合最低线的保存到一个数组中
  for(i = 0; i < N; i++){
    scanf("%d %d %d",&tmp.id, &tmp.moral, &tmp.talent);
    if (tmp.moral >= l && tmp.talent >= l) {
      tmp.type = 4;
      if(tmp.moral >= h && tmp.talent >= h) tmp.type = 1;
      if(tmp.moral >= h && tmp.talent < h) tmp.type = 2;
      if(tmp.moral < h && tmp.talent < h && tmp.moral >= tmp.talent) tmp.type = 3;
      p = (stu*)realloc(p, (++M) * sizeof(stu));
      if (p  == NULL) return -1;
      p[M-1] = tmp;
    }
  }
  //排序
  for(i = 0; i < M-1; i++){
    tmp = p[i];
    for(j = i+1; j < M; j++) {
      if (p[j].type > tmp.type) continue;
      else if(p[j].type < tmp.type) {tmp = p[j];p[j]=p[i];p[i]=tmp;}
      else {
        if((p[j].moral + p[j].talent) > (tmp.moral+tmp.talent)) {tmp = p[j];p[j]=p[i];p[i]=tmp;}
        if((p[j].moral + p[j].talent) < (tmp.moral+tmp.talent)) continue;
        if ((p[j].moral + p[j].talent) == (tmp.moral+tmp.talent)) {
          if(p[j].moral > tmp.moral) {tmp = p[j];p[j]=p[i];p[i]=tmp;}
          if(p[j].moral < tmp.moral) continue;
          if(p[j].moral == tmp.moral) {
            if(p[j].id < tmp.id) {tmp = p[j];p[j]=p[i];p[i]=tmp;}
          }
        }
      }
    }
  }
  //输出
  printf("%d\n", M);      //到达最低分的人数
  for(i = 0; i < M; i++) {
    printf("%d %d %d\n", p[i].id, p[i].moral, p[i].talent);
  }
  return 0;
}
