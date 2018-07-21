#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[])
{
    int FirstAdd,Total,K,key;
    cin>>FirstAdd>>Total>>K;
    key=FirstAdd;
    int temp,Data[100005],Next[100005];
    int i,j;
    for(i=0;i<Total;i++)
    {
        cin>>temp>>Data[temp]>>Next[temp];      //形成地址到值的映射，地址和值是一对，不会更改
    }
    int Order[100005],count=0;
    while(key!=-1)
    {
        Order[count]=key;       //地址排序，全部存放逻辑顺序的地址
        key=Next[key];
        count++;
    }
    int round=count/K;
    for(i=j=0;j<round;i=i+K,j++)
    {
        reverse(Order+i, Order+i+K);
    }
    for(i=0;i<count-1;i++)
    {
        printf("%05d %d %05d\n",Order[i],Data[Order[i]],Order[i+1]);
    }
    printf("%05d %d -1\n",Order[i],Data[Order[i]]);
    return 0;
}
// 利用足够大的数组作为一个静态链表，结点的地址是数组下标，也不用排序；
// 每k个结点翻转时，将这k个元素组成的链表拆下来，链表中剩余的部分组成一个链表，
// 然后将这k个元素以头插法插入到该链表中，为了操作方便，将链表设为带头结点的链表。
