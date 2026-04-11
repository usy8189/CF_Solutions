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
        string s;
        cin >> s;
        for(int i=n-1; i>=0; i--)
        {   int j = i;
            if(s[i] == ')')
                {
                    while(j >= 0 )
                    {
                        if(s[j] == '(')
                        {
                            s[i]='.';
                            s[j]='.';
                            break;
                        }
                        j--;
                    }
                }
        }
        int count = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i] == '.')
                count++;
        }
        cout << (n-count)/2 << endl;
    }

    return 0;
}
