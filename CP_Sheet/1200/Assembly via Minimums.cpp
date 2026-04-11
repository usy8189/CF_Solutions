//by Ujjwal Singh Yadav 

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fori(i, a, b) for (ll i = a; i < b; i++)
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
      ll k,n;
      cin>>k;
      n=(k*(k-1))/2;
      ll max=-1*LLONG_MAX;
      vector<ll>a(n);
      fori(i,0,n){
        cin>>a[i];
        if (a[i]>max)max=a[i];
      }
      vector<ll>ans;
      sort(a.begin(),a.end());

      ll temp=k-1,i=0;
      while ( temp > 0)
      {
        ans.push_back(a[i]);
        i += temp;
        temp--;
      }
      ans.push_back(max);

       fori(i,0,k)cout<<ans[i] << " ";
       cout<<endl;
      
    }

    return 0;
}
