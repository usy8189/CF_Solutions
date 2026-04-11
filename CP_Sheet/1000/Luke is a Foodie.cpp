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
        int n,x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = a[0] - x;
        int h = a[0] + x;

        int count = 0;

        for (int i = 1; i < n; i++)
        {
            int nl = a[i] - x;
            int nh = a[i] + x;

            if (nl > h || nh < l)
            {
                count++;
                l = nl;
                h = nh;
            }
            else
            {
                l = max(l, nl);
                h = min(h, nh);
            }
        }

        cout << count << endl;
    }

    return 0;
}