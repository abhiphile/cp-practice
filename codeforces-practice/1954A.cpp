/*
    Rating : 900
    https://codeforces.com/problemset/problem/1954/A
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

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    // coding part
    if (m == 1)
    {
        no;
        return;
    }
    if (m > n)
        m = n;
    int p1 = 0;
    if (n % m == 0)
        p1 = n - (n / m);
    else
    {
        p1 = n - (n + m - n % m) / m;
    }
    if (p1 > k)
        yes;
    else
        no;
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}