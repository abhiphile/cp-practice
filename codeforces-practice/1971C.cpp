/*
    Rating : 900
    https://codeforces.com/problemset/problem/1971/C
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    set<int> s1;

    for (int i = (a+1)%12; i!=b; i=(i+1)%12)
    {
        if(i == 0 and b == 12) break;
        if(i == 0) s1.insert(12);
        else s1.insert(i);
    }
    if((s1.find(c) != s1.end() and s1.find(d) != s1.end())) no;
    else if((s1.find(c) == s1.end() and s1.find(d) == s1.end())) no;
    else yes;
    return;
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