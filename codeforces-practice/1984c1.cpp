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
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<ll> l(n, 0);
    vector<ll> r(n, 0);

    l[0] = arr[0];
    for (int i = 1; i < n; i++)
        l[i] = l[i - 1] + arr[i];
    for (int i = n - 2; i >= 0; i--)
        r[i] = r[i + 1] + arr[i + 1];

    ll maxi = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(abs(l[i]) + r[i], max(l[i]+r[i], maxi));
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