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
        ll sum = 0;
        ll minVal = LLONG_MAX;
        vector<ll>second_min;
        for(int i = 0; i < n; i++)
        {
            int len;
            cin >> len;
             vector<ll>arr(len);
            for(int j = 0; j < len; j++)
            {
                cin>>arr[j];
            }
            sort(arr.begin(),arr.end());
            if(len>1)
            second_min.push_back(arr[1]);
            
            minVal = min(minVal,arr[0]);
        }
        sum = minVal;
        sort(second_min.begin(),second_min.end());
        if(second_min.size()>1)
        { for (int i = 1; i < second_min.size(); i++)
        {
            sum+=second_min[i];
        }
        }
        cout<<sum<<endl;
    }

    return 0;
}
