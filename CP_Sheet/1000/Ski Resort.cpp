#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll pal(ll n, ll k) {
    if (n < k) return 0;
    ll m = n - k + 1;
    return m * (m + 1) / 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, k, q;
        cin >> n >> k >> q;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll z = 0, ways = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] <= q)
                z++;
            else {
                ways += pal(z, k);
                z = 0;
            }
        }
        ways += pal(z, k);

        cout << ways << "\n";
    }
}
