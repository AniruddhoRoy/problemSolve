#include <stdio.h>
#include <math.h>
long serise(int k)
{
    long total = 0;
    for (int i = 1; i <= k; i++)
    {
        total += pow(2, i - 1);
    }
    return total;
}
int solve(int n)
{
    int k = 2;
    while (n % serise(k) != 0)
    {
        k++;
    }
    return n / serise(k);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long a;
        scanf("%ld", &a);
        printf("%d\n", solve(a));
    }
}