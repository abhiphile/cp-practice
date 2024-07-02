#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define mod 1000000007;

void solve()
{
    ll x, y, z, vol2;           // inputs
    cin >> x >> y >> z >> vol2; // taking input
    ll vol1 = x * y * z;        // calculating vol1
    ll maxi = 0;                // making initial count
    if (vol1 < vol2)
    {
        cout << 0 << endl; // if vol1 > vol2
        return;
    }
    if (vol1 == vol2)
    {
        cout << 1 << endl;
        return;
    }

    // this part needs use of combinatorics
    for (ll i = 1; i <= x; i++)
    {
        for (ll j = 1; j <= y; j++)
        {
            if ((vol2 % (i * j)) == 0)
            {
                ll k = vol2 / (i * j);
                if (k <= z && i * j * k == vol2)
                    maxi = max((x - i + 1) * (y - j + 1) * (z - k + 1), maxi);
            }
        }
    }

    cout << maxi << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}