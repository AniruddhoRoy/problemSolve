#include <stdio.h>
int solve(int x, int n, int m)
{

    while (((x / 2) + 10) < x && n > 0)
    {
        x = (x / 2) + 10;
        n--;
        }
    x -= m * 10;
    return x > 0 ? 0 : 1;
}
int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, n, m;
        scanf("%d %d %d", &x, &n, &m);
        printf("%s\n", solve(x, n, m) ? "YES" : "NO");
    }
    return 0;
}