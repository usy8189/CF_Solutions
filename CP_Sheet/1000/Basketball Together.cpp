#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,d;
    cin >> n >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());
        
    int ans = 0,i=0,j=n-1;
    while(i<=j)
    {
        long long num = d / a[i] + 1;

        if (num > j - i + 1)
            break;

        ans++;
        i++;
        j -= (num - 1);
    }
    
    cout << ans << endl;


    return 0;
}