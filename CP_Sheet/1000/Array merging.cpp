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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

    unordered_map<int, int> maxFreqa, maxFreqb;

    int curr = a[0];
    int count = 1;

    for (int i = 1; i < a.size(); i++) {
        if (a[i] == curr) {
            count++;
        } else {
            maxFreqa[curr] = max(maxFreqa[curr], count);
            curr = a[i];
            count = 1;
        }
    }
    maxFreqa[curr] = max(maxFreqa[curr], count);

    curr = b[0];
    count = 1;

    for (int i = 1; i < b.size(); i++) {
        if (b[i] == curr) {
            count++;
        } else {
            maxFreqb[curr] = max(maxFreqb[curr], count);
            curr = b[i];
            count = 1;
        }
    }
    maxFreqb[curr] = max(maxFreqb[curr], count);   
    
    for (auto &x : maxFreqb) {
        maxFreqa[x.first] += x.second;
    }

    int ans = 0;
    for (auto &x : maxFreqa) {
        ans = max(ans, x.second);   
    }
    cout << ans << "\n";
    }
    return 0;
}