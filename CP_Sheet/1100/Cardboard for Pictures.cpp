#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        ll n,c;
        cin >> n >> c;

        vector<ll> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        ll left=0, right=1e9, ans=0;

        while(left<=right)
        {
            ll mid=(left+right)/2;
            ll sum=0;

            for(int i=0;i<n;i++)
            {
                ll val=a[i]+2*mid;
                sum+=val*val;
                if(sum>c) break;
            }

            if(sum==c)
            {
                ans=mid;
                break;
            }
            else if(sum<c)
                left=mid+1;
            else
                right=mid-1;
        }

        cout<<ans<<"\n";
    }
}