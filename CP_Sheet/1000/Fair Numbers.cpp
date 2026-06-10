#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll t;
        cin >> t;

        vector<int> v(10, 0);
        int found = 1;

        ll temp = t, temp2 = t;

        while (found)
        {
            int is = 0;
            int i = 0;

            while (temp) 
            {
                i = temp % 10;
                v[i]++;
                temp /= 10;
            }

            for (int j = 1; j < 10; j++)
            {
                if (v[j] > 0 && temp2 % j != 0)
                {
                    is = 1;
                    break;
                }
            }

            if (is == 0)
            {
                cout << temp2 << "\n";
                found = 0;
            }

            t++;
            temp = t;
            temp2 = t;
            fill(v.begin(), v.end(), 0);
        }
    }

    return 0;
}
