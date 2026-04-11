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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans =n,count=0;
        vector<int> v(n+1,0);
        for (int i=0;i<n;i++){
            if(s[0]=='W'){
                v[0]=1;    
            }
            if(s[i]=='W'){
                v[i+1]=v[i]+1;
            }
            else{
                v[i+1]=v[i];
        }
       }
        for(int i=0;i<=n-k;i++)
        { 
            int white_count=v[i+k]-v[i];
            ans=min(ans,white_count);
        }
        cout<<ans<<"\n";
    }

    return 0;
}