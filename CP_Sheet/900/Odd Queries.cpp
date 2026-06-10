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
        int n, q,result;
        cin >> n >> q;
        vector<int> arr(n),sum(n+1,0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum[i + 1] = sum[i] + arr[i];       
        }
        vector<int> l(q), r(q), k(q);
        for(int i=0;i<q;i++){
            cin>>l[i]>>r[i]>>k[i];
            result=0;
            result=sum[n]-(sum[r[i]]-sum[l[i]-1])+(r[i]-l[i]+1)*k[i];
        if(result%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
        
    }

    return 0;
}