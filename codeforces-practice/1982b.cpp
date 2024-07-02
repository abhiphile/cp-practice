// Collatz Conjecture

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

ll rep(ll x, ll y)
{
    while (x % y == 0)
        x /= y;
    return x;
}
void solve(ll x, ll y, ll k)
{
    if (k == 0)
    {
        cout << x << endl;
        return;
    }
    while (k > 0)
    {
        ll diff = y - (x % y);
        if (diff > k)
        {
            cout << x + k << endl;
            return;
        }
        else if (diff == k)
        {
            x += diff;
            x = rep(x, y);
            cout << x << endl;
            return;
        }
        else if (diff < k)
        {
            k -= diff;
            x += diff;
            x = rep(x, y);
            if (x >= 1 and x < y)
            {
                ll ans = (x + k) % (y - 1);
                if (ans == 0)
                    cout << x << endl;
                else
                    cout << ans << endl;
                return;
            }
        }
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        solve(x, y, k);
    }
    return 0;
}