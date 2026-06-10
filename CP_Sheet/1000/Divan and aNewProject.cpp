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
        vector<pair<ll,ll>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second=i;
            
        }
        ll min_dist=0;
        sort(a.begin(),a.end(),greater<pair<ll,ll>>());
        for(int i=0;i<n/2;i++){
           min_dist+=2*((i+1)*(a[2*i].first+a[2*i+1].first));
        }
        if(n%2==1){
            min_dist+=2*((n/2+1)*a[n-1].first);
        }
       
        cout << min_dist << "\n";
        vector<int> ans(n+1);
        ans[0]=0;
        for(int i=0;i<n/2;i++){
            ans[a[2*i].second+1]=i+1;
            ans[a[2*i+1].second+1]=-(i+1);
        }
        if(n%2==1){
            ans[a[n-1].second+1]=n/2+1;
        }
        for(int i=0;i<=n;i++){
            cout << ans[i] << " ";
        }
        cout << "\n";


    }

    return 0;
}