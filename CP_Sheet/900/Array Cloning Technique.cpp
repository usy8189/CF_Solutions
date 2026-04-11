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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max_count = 0;
        int count = 1;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1] && i < n - 1)
            {
                count++;
            }
            else
            {
                max_count = max(max_count, count);
                count = 1;
            }
            if (i == n - 2)
            {
                max_count = max(max_count, count);
            }
        }
        max_count = max(max_count, count);
        int replace = n - max_count;
        int ans = 0;
        while (n > max_count)
        {
            ans++;
            max_count = max_count * 2;
        }
        cout << ans + replace<< endl;
    }

    return 0;
}