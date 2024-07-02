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

bool xinrange(ll x, ll l, ll r)
{
    if (x >= l and x <= r)
        return true;
    return false;
}
void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int i = 0, j = 0;
    ll sum = 0;
    int cnt = 0;
    while (i < n and j < n)
    {
        sum += arr[i];
        i++;
        if (sum < l)
            continue;
        if (sum <= r)
        {
            cnt++;
            sum = 0;
            j = i;
            continue;
        }
        while(j < i and sum>r){
            sum -= arr[j];
            j++;
        }
        if(sum >= l){
            sum = 0;
            cnt++;
            j = i;
        }
    }
    cout << cnt << endl;
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