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
        int n;
        cin >> n;

        vector<string> a(n),visited(n, string(n, '0'));

        for(int i = 0; i < n; i++)
        cin >> a[i];

        ll count = 0;

        fori(i,0,n){
            fori(j,0,n)
            {
                if(visited[i][j]=='0')
                {
                    int temp1=a[i][j]- '0';
                    int temp2=a[n-1-j][i]- '0';
                    int temp3=a[j][n-1-i]- '0';
                    int temp4=a[n-1-i][n-1-j]- '0';
                    int ones = temp1 + temp2 + temp3 + temp4;
                    int zeros = 4 - ones;
                    count += min(ones, zeros);
                    visited[i][j]=1;
                    visited[n-j-1][i]=1;
                    visited[j][n-i-1]=1;
                    visited[n-i-1][n-j-1]=1;
                }
            }
        }
       
        cout<<count<<endl;

    }

    return 0;
}
