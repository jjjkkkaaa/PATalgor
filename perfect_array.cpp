#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100005;
int a[N];
int main()
{
    long long n, p, maxlength = 0;
    cin >> n >> p;
    for (int i = 0; i != n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (long i = 0; i < n; i++)
    {
        for (long j = i + maxlength; j < n; j++)
        {
            if (a[j] > a[i] * p)
                break;
            maxlength++;
        }
    }
    cout << m ;
    return 0;
}
