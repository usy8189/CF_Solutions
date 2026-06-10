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
        ll n,p;
        cin >> n >> p;
        vector<pair<ll,ll>> a(n);
        for(int i=0;i<n;i++) cin >> a[i].first ;
        for(int i=0;i<n;i++) cin >> a[i].second ;
        sort(a.begin(), a.end(), [](auto &a, auto &b) {
                 return a.second < b.second;
          });
        ll num=1;
        ll total = p;
        if(n>1)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i].second < p)
                {   
                    while(a[i].first)
                    {
                    total += a[i].second;
                    a[i].first = a[i].first - 1;
                    num++;
                    if(num == n) break;
                    }
                    if(num == n) break;
                }
                else break;
            }
            if(num<n){
                total = total + (n-num)*p;
            }
        }
        cout << total << endl;

    }

    return 0;
}