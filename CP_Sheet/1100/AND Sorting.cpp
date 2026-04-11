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
        ll n;
        cin >> n;

        vector<ll> p(n);

        for (ll i = 0; i < n; i++)
            cin >> p[i];

        
        ll ans =-1;
        for (int i = n-1;i>=0;i--){
            if (p[i]!=i)
            {
                ll temp=p[i]&i;
                if (ans == -1)ans=temp;
                else ans &=temp;
            }
        }
       
       cout<< ans<<endl;


    }

    return 0;
}