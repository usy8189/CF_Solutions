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
        ll x,y,k;
        cin >> x >> y >> k;
        ll i = k * y + k - 1;
        ll j=x-1;
        ll l = (i + j - 1) / j;
        cout << l+k << endl;
    }

    return 0;
}
