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
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];
    // find the Man center of the circle
    int x1, x2, x3, x4;
    bool mark = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '#')
            {
                if (mark)
                {
                    mark = false;
                    x1 = i;
                    x2 = j;
                }
                x3 = i;
                x4 = j;
            }
        }
    }
    cout << (x1+x3)/2 + 1 << " "<<x4+1 << endl;
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
        solve();
    return 0;
}