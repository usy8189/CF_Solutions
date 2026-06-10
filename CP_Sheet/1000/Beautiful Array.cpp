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
        ll n,k,b,s;
        cin>>n>>k>>b>>s;

        vector<ll> arr(n,0);
        ll min_sum = b * k;
        ll max_sum = b * k + n * (k - 1);
        if(s < min_sum || s > max_sum) {
            cout << -1 << "\n";
            continue;
        }
        
        arr[0] = min_sum;
        s -= arr[0];
        for(int i=0;i<n;i++) {
            if(s > 0) {
                ll add = min(s, (k-1));
                arr[i] += add;
                s -= add;
            }
        }
        
        for(int i=0;i<n;i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}