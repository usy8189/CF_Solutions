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
        ll k;
        cin >> k;

        vector<vector<int>> a(n, vector<int>(n));

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];

        ll count = 0;

        for (int i = 0; i < n/2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] != a[n-1-i][n-1-j])
                    count++;
            }
        }
        if (n % 2)
        {
            int mid = n/2;
            for (int j = 0; j < n/2; j++)
            {
                if (a[mid][j] != a[mid][n-1-j])
                    count++;
            }
        }

        if (k < count)
        cout << "NO"<<endl;
        else if ((k-count) % 2 == 0 || n % 2 == 1)
        cout << "YES"<<endl;
        else
        cout << "NO"<<endl;
        }

    return 0;
}