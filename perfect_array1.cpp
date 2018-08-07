# include <cstdio>
using namespace std;
int main()
{
    int N, n = 0;
    long long int p, s[100000], Max = 0, Min;
    scanf("%d %lld", &N, &p);
    for(int i = 0; i < N; i++)
    {
        scanf("%lld", &s[i]);
        if(s[i] > Max)
            Max = s[i];
    }
    if(Max % p)
        Min = (Max / p) + 1;
    else
        Min = Max / p;
    for(int i = 0; i < N; i++)
    {
        if(s[i] < Min)
            n++;
    }
    if(p == 2)
        printf("%d", N - n + 3);
    else
        printf("%d", N - n);
}
