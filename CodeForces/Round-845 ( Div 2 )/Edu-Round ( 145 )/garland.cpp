#include <bits/stdc++.h>
using namespace std;

void Prag2003()
{
    string s;
    cin >> s;
    int n = s.length();
    map<int, int> m;
    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++)
    {
        m[s[i] - '0']++;
    }

    if (m.size() == 1)
    {
        cout << "-1\n";
        return;
    }

    if (m.size() == 3 || m.size() == 4)
    {
        cout << "4\n";
        return;
    }

    if (m.size() == 2)
    {
        for (auto &i : m)
        {
            if (i.second == 2)
            {
                cout << "4\n";
                return;
            }
            cout << "6\n";
            return;
        }
    }
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        Prag2003();
    }
}