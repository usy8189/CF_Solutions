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
        string a,b;
        cin >> a >> b;
        int n = a.size();
        int m = b.size();
        int maxLen = 0;
        vector<vector<int>> storagee(n + 1, vector<int>(m + 1, 0));

       for (int i = 1; i <= n; i++) 
       {
        for (int j = 1; j <= m; j++) 
        {
            if (a[i - 1] == b[j - 1]) 
            {
                storagee[i][j] = storagee[i - 1][j - 1] + 1;
                maxLen = max(maxLen, storagee[i][j]);
            }
        }
       }
    cout<< m+n-2*maxLen << endl;
    }

    return 0;
}