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
bool check(vector<ll> &arr, ll n, ll h)
{
    ll temp = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        temp += min(n, (arr[i + 1] - arr[i]));
        if (temp >= h)
            return true;
    }
    temp += n;
    if (temp >= h)
        return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, h;
        cin >> n >> h; // n is no of hits and h is the health of the dragon.
        vector<ll> arr(n);
        for (int i=0;i<n;i++)
            cin >> arr[i];
        // output
        if (n == 1)
        {
            cout << h << endl;
            continue;
        }
        ll lo = 1;
        ll hi = h;
        ll mid;

        ll ans = 0;
        while (hi >= lo)
        {
            mid = lo + (hi - lo) / 2;
            if (check(arr, mid, h))
            {
                ans = mid;
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}