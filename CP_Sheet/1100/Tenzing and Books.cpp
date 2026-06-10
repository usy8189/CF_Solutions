#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> a(n), b(n), c(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
            cin >> c[i];            

        long long orr = 0;

        for (int i = 0; i < n; i++) {
            if ((a[i] | x) == x)
                orr |= a[i];
            else
                break;
        }

        for (int i = 0; i < n; i++) {
            if ((b[i] | x) == x)
                orr |= b[i];
            else
                break;
        }

        for (int i = 0; i < n; i++) {
            if ((c[i] | x) == x)
                orr |= c[i];
            else
                break;
        }

        if (orr == x)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}