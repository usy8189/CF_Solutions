#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

        while (t--)
{
    int n, r, b;
    cin >> n >> r >> b;

    int max_red = r / (b + 1);
    int remain = r % (b + 1);

    string ans="";

    for (int i = 0; i < b + 1; i++)
    {
        for (int j = 0; j < max_red; j++)
            ans += 'R';

        if (remain > 0)
        {
            ans += 'R';
            remain--;
        }

        if (i < b)
            ans += 'B';
    }

    cout << ans << "\n";


    }
}
