/*
    Rating : 1100
    https://codeforces.com/problemset/problem/1977/B
    Tags : Bit manipulation, greedy
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
    int x;
    cin >> x;

    vector<int> res(32, 0);

    if (x & 1){
        res[0] = 1;
    }

    for (int i = 1; i < 30; i++)
    {
        if((x>>i) & 1){
            if(res[i] == 1){
                res[i] = 0;
                res[i+1] = 1;
            }
            else if(res[i-1] == 1){
                res[i-1] = -1;
                res[i+1] = 1;
            }
            else{
                res[i] = 1;
            }
        }
    }

    cout <<31<< endl;
    for (int i = 0; i < 31; i++)
        cout << res[i] << " ";
    cout << endl;
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
