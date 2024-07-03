/*
    Rating : 1200
    Link : https://codeforces.com/contest/1982/problem/B

    Collatz Conjecture
    ==================
    It is a very classical problem in which the loop created and it rotates in this loop from
    [1, y-1] ===> Loop is created
    1 -> 2 -> 3 -> 4 -> ........ -> y-1 -> 1 -> 2 -> 3 -> 4 -> ........ ->y-1 ->
    From any x after k operations it will reach to ?
    x will be (x + k)%(y - 1) if it is 0 then output will be x
        else the result will be (x + k)%(y - 1)
*/

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
    /* Does repetitive division.*/
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