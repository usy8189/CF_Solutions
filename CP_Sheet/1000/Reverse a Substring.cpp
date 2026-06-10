#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        int n;
        cin >> n;
        string s;
        cin >> s;
        
        vector<pair <char, int>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({s[i], i});
        }
        sort(v.begin(), v.end());
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != v[i].first)
            {   
                cout << "YES\n";
                cout<< i+1 << " " << v[i].second + 1 << "\n";
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "NO\n";
        }
    

    return 0;
}
