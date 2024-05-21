#include <stdio.h>

unsigned long long p(int n, int s);

int main()
{
    int num, n, m, i;
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        scanf("%d %d", &n, &m);
        if(m-n < n) n = m-n;
        printf("%llu\n", p(m, m - n + 1) / p(n, 1));
    }
    return 0;
}
unsigned long long p(int n, int s)
{
    unsigned long long a = 1;
    unsigned long long i;
    for (i = n; i >= s; i--)
        a *= i;
    return a;
}
//