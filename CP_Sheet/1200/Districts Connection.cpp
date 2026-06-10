//by Ujjwal Singh Yadav 

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fori(i, a, b) for (ll i = a; i < b; i++)
#define BOOB for (ll i = 0; i < n; i++)cin>>a[i];
const ll INF = 1e18;
const ll MOD = 1e9 + 7;


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        {
            ll n;
            cin >> n;
            vector<ll> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];

            vector<pair<ll,ll>> ans;
            set<pair<ll,ll>> st;
            set<int> ep;

            int dd = -1;
            for(int i = 1; i < n; i++){
                if(a[i] != a[0]){
                    dd = i;
                    break;
                }
            }

            if(dd == -1){
                cout << "NO"<<endl;
                continue;
            }

            ep.insert(0);
            for(int i = 1; i < n; i++){
                if(a[i] != a[0]){
                    ans.push_back({1, i+1});
                    st.insert({1, i+1});
                    ep.insert(i);
                }
            }

            for(int i = 1; i < n; i++){
                if(a[i] == a[0]){
                    if(st.count({dd+1, i+1}) == 0){
                        ans.push_back({dd+1, i+1});
                        st.insert({dd+1, i+1});
                        ep.insert(i);
                    }
                }
            }

            cout << "YES"<<endl;
            for(auto &p : ans){
                cout << p.first << " " << p.second << endl;
            }
            }

    return 0;
}

