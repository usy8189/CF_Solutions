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

        int total_and = arr[0];
        for (int i = 1; i < n; i++)
        {
            total_and &= arr[i];
        }
        cout << total_and << "\n";
    }

    return 0;
}