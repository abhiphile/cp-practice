/*
    Rating : 900
    https://codeforces.com/problemset/problem/1973/A

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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        if ((v[0] + v[1] + v[2]) % 2 == 1)
        {
            cout << "-1\n";
            continue;
        }
        cout << (v[0] + v[1] + v[2] - max(0, v[2] - v[0] - v[1])) / 2 << "\n";
    }
    return 0;
}