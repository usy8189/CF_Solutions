#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int pro = n * k;

        vector<long long> a(pro);
        for (int i = 0; i < pro; i++) cin >> a[i];

        int median ;
        if (n % 2 == 0) {
            median = n / 2;
        } else {
            median = (n + 1) / 2;
        }
        int step = n - median;
        
        long long sum = 0;
        int idx = k * (median - 1);
        
        for (int i=idx; i < pro; i += step+1) {
            sum += a[i];
            
        }

        cout << sum << "\n";
    }
    return 0;
}
