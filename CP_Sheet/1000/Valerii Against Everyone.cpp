#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[b[i]]++;
        }
        int ans = 0;
        for (auto it : mp)
        {
            if (it.second > 1)
            {
                ans++;
            }
        }
        if (ans > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
