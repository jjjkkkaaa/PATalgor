#include<bits/stdc++.h>     //包含所有的c++头文件
using namespace std;

int main(void)
{
    char head,a[10001]= {0};
    int ex=0;
    scanf("%c%c.%[0-9]E%d",&head,&a[0],a+1,&ex);//输入拆分
    if (head == '-') printf("-");
    if(ex>=0)
    {
        for(int i=0; i<ex+1||a[i]!=0; i++)
        {
            if(i==ex+1) printf(".");
            printf("%c",a[i]==0?'0':a[i]);
        }
    }
    else
    {
        printf("0.");
        for(int i=1; i<(-ex); i++)
            printf("0");
        printf("%s",a);
    }
    printf("\n");

    return 0;
}
