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
        string s;
        cin >> s;
        set<char> st;
        vector<int>prefix(n), suffix(n);
        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
            prefix[i] = st.size();
        }
        st.clear();
        for (int i = n - 1; i >= 0; i--)
        {
            st.insert(s[i]);
            suffix[i] = st.size();
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, prefix[i] + suffix[i + 1]);
        }
        cout << ans << "\n"; 
    }

    return 0;
}
