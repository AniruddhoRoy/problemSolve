#include <iostream>
#include <vector>
using namespace std;
void solve(int n, int m, vector<vector<char>> &arr)
{
    int x = 1, y = 1;
    int x1 = 1, y1 = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] == '#')
            {
                x = i;
                y = j;
                break;
            }
        }
    }

    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] == '#')
            {
                x1 = i;
                y1 = j;
                break;
            }
        }
    }

    cout << (x + x1) / 2 << " " << (y + y1) / 2 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> arr(n + 2, vector<char>(m + 2));
        cin.ignore();

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> arr[i][j];
            }
        }

        solve(n, m, arr);
    }

    return 0;
}
