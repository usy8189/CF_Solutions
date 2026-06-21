//by Ujjwal Singh Yadav 

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fori(i, a, b) for (ll i = a; i < b; i++)
#define YYY cout<<"YES"<<endl;
#define NNN cout<<"NO"<<endl;
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
        cin>>n;
        vector<int>a(n);
        fori(i,0,n)cin>>a[i];
        vector<pair<int,int>> pal;
        fori(i,0,n)
        {
            int l=i-1;
            int r=i+1;

            while(l>=0 && r<n && a[l]==a[r])
            {
                pal.push_back({l,r});
                l--;
                r++;
            }
            l=i;
            r=i+ 1;
            if(l>=0 && r<n && a[l]==a[r])
            {
                l--;
                r++;
            }
            while(l>=0 && r<n && a[l]==a[r])
            {
                pal.push_back({l, r});
                l--;
                r++;
            }
        }
        sort(all(pal), [](pair<int,int> &p1, pair<int,int> &p2)
        {
            return (p1.second - p1.first) > (p2.second - p2.first);
        });
        int ans = 1;
        for(auto p : pal)
        {   
            int l = p.first;
            int r = p.second;
            int len = r - l + 1;
            if(len <= ans)break;
            unordered_set<int> st;
            for(int i=l;i<=r;i++)
            {
                if(a[i] >= 0)
                    st.insert(a[i]);
            }
            int mex=0;
            while(st.count(mex))
                mex++;
            ans=max(ans,mex);
        }
        cout <<ans<< endl;
        }
    return 0;
}
