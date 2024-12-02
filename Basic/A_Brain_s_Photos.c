#include <stdio.h>
int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    char arr[n][m];
    getchar();
    // getchar();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%c", &arr[i][j]);
            getchar();
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y')
            {
                printf("#Color");
                return 0;
            }
        }
    }
    printf("#Black&White");
    return 0;
}