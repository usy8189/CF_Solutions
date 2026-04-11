//by Ujjwal Singh Yadav 

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fori(i, a, b) for (ll i = a; i < b; i++)
const ll INF = 1e18;
const ll MOD = 1e9 + 7;

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int z = count(s.begin(), s.end(), '0');
        if (z==0)cout<<"DRAW"<<endl;
        else if (z == 1) {
            cout << "BOB\n";
        }
        else if (z % 2 == 0) {
            cout << "BOB\n";
        }
        else {
            if (n % 2 == 1 && s[n/2] == '0')
                cout << "ALICE\n";
            else
                cout << "BOB\n";
        }
    }
}