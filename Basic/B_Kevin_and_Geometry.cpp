#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pr pair<int, int>
#define PB(v)           \
    {                   \
        int x;          \
        std::cin >> x;  \
        v.push_back(x); \
    }
#define out(text)             \
    {                         \
        cout << text << endl; \
    }
#define loop(n) for (int i = 1; i <= (n); i++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        loop(n)
        {
            PB(v);
        }
        sort(v.begin(), v.end());
        bool f = false;
        vector<int> result;
        for (int j = 1, i = 0; j < v.size(); i++, j++)
        {
            int a = v[i];
            int b = v[j];
            if (a == b)
            {
                vector<int> temp(v.begin(), v.end());
                temp.erase(temp.begin() + i);
                temp.erase(temp.begin() + i);
                for (int k = 0, l = 1; l < temp.size(); k++, l++)
                {
                    int c = temp[k];
                    int d = temp[l];
                    if (a + b + c > d && b + c + d > a && a + b + d > c && a + c + d > b)
                    {
                        f = true;
                        result.push_back(a);
                        result.push_back(b);
                        result.push_back(c);
                        result.push_back(d);
                        goto end;
                    }
                }
            }
        }
    end:
        // cout << f << endl;
        if (f)
        {
            for (int x : result)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}