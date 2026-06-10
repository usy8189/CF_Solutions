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
        char c;
        cin >> c;
        string s;
        cin >> s;
        
        s=s+s;
        n*=2;
        int ans=0;
        int pos=-1;
        int maxi=0;
           for (int i = n - 1; i >= 0; i--)
		{
			if (s[i] == 'g')
				pos = i;

			
			if (s[i] == c)
			{
				int diff = pos - i;
				maxi = max(maxi, diff);
			}
		}
		cout << maxi << endl;
            }

    return 0;
}
