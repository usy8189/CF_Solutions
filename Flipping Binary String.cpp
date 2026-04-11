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
        ll n,ct1=0,ct0=0;
        cin>>n;
        string s;
        cin>>s;
        vector<ll>pos1,pos0;
        fori(i,0,n)
        {
            if (s[i]=='1')
            {
                ct1++;
                pos1.push_back(i+1);
            }
            if (s[i]=='0')
            {
                ct0++;
                pos0.push_back(i+1);
            }
        }
        if (ct1%2==0)
        {
            cout<<ct1<<endl;
            
            for (auto x: pos1)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else if (ct0%2==1)
        {
            cout<<ct0<<endl;
            for (auto x: pos0)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else cout<<-1<<endl;
       
    }

    return 0;
}
