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
        ll a, b;
        cin >> a >> b;

        ll count = 1000000000000000000;

        for (ll i = 0; i < 50; i++)
        {
            ll temp2 = b + i;
            ll count2 = i;

            if (temp2 < 2)
            {
                count2 += 2 - temp2;
                temp2 = 2;
            }

            ll temp = a;

            while (temp != 0)
            {
                temp /= temp2;
                count2++;
            }

            count = min(count, count2);
        }

        cout << count << "\n";
    }

    return 0;
}
