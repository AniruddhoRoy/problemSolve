#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pr pair<int, int>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        set<char> completed_task;
        bool suspicious = false;
        completed_task.insert(s[0]);
        for (int i = 1; i < n; i++)
        {
            // cout << s[i] << endl;
            if (s[i] != s[i - 1])
            {
                if (completed_task.find(s[i]) != completed_task.end())
                {
                    suspicious = true;
                    break;
                }
            }
            completed_task.insert(s[i]);
        }
        if (suspicious)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        // for (char x : completed_task)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;
    }
    return 0;
}