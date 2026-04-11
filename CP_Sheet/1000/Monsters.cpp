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
        int n, k;
        cin >> n >> k;

        vector<pair<int,int>> health_points(n);

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            int val = x % k;
            if(val == 0) val = k;          

            health_points[i].first = val; 
            health_points[i].second = i + 1; 
        }

        sort(health_points.begin(), health_points.end(),
             [](pair<int,int> &a, pair<int,int> &b){
                 if(a.first == b.first)
                     return a.second < b.second; 
                 return a.first > b.first;      
             });

        for(int i = 0; i < n; i++)
            cout << health_points[i].second << " ";
        cout << "\n";
    }
    return 0;
}
