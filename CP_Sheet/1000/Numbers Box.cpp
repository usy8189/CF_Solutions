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
        int n,m;
        cin >> n >> m;
        int negative = 0;
        int minimum=INT_MAX;
        ll sum = 0;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
                if (v[i][j] < 0)
                    negative++;
                if (abs(v[i][j]) < minimum)
                {
                    minimum = abs(v[i][j]);
                }    
                sum += abs(v[i][j]);
            }
        }
        if (negative % 2 == 0)
            cout << sum << endl;
        else
            cout << sum - 2 * minimum << endl;
        

    }

    return 0;
}
