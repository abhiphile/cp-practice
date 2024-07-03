/*
    PROBLEM : https://codeforces.com/contest/371/problem/C
    TAGS : Binary Search
    SOURCE : STRIVERS-CP SHEET
    APPROACH :  
    Apply binary search on the monotonic function.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define mod 1000000007;

ll nb = 0, ns = 0, nc = 0;
ll ab, as, ac;
ll pb, ps, pc;
ll tot;

bool canmake(long long x)
{
    if (x == 0)
        return 1;
    ll k1 = LLONG_MAX;
    if (nb != 0)
        k1 = ab / nb;
    if (ns != 0)
        k1 = min(k1, as / ns);
    if (nc != 0)
        k1 = min(k1, ac / nc);

    ll leftb = ab - k1 * nb;
    ll lefts = as - k1 * ns;
    ll leftc = ac - k1 * nc;
    ll z = 0;
    ll k2 = max(x - k1, z); // total no of burgs we can make
    if (k1 >= x)
    {
        return 1;
    };

    leftb = max(z, nb * k2 - leftb);
    lefts = max(z, ns * k2 - lefts);
    leftc = max(z, nc * k2 - leftc);

    ll mr = leftb * pb + lefts * ps + leftc * pc;
    if (mr <= tot)
        return 1;
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string ip;
    cin >> ip;
    cin >> ab >> as >> ac;
    cin >> pb >> ps >> pc;
    cin >> tot;
    // counting the number of items req to make 1 burger
    for (char i : ip)
    {
        if (i == 'B')
            nb++;
        else if (i == 'S')
            ns++;
        else
            nc++;
    }
    ll lo = 0;
    ll hi = 1000000000000000;
    ll mid, ans = -1;
    while (hi >= lo)
    {
        mid = lo + (hi - lo) / 2;
        if (canmake(mid))
        {
            ans = mid;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    cout<<ans<<endl;

    return 0;
}