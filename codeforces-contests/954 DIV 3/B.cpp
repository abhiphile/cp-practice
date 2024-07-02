/*
    abhishek
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

int di[4] = {0, 0, -1, 1};
int dj[4] = {1, -1, 0, 0};

void print_vector(vector<vector<int>> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool check(vector<vector<int>> &arr, int a, int b) {
    int n = arr.size(), m = arr[0].size();
    for (int i = 0; i < 4; i++) {
        int x = di[i] + a;
        int y = dj[i] + b;
        if (x >= 0 && x < n && y >= 0 && y < m && arr[x][y] >= arr[a][b]) 
            return false;
    }
    return true;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    bool changed;
    do {
        changed = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (check(grid, i, j)) {
                    grid[i][j]--;
                    changed = true;
                    break;
                }
            }
            if (changed) break;
        }
    } while (changed);

    print_vector(grid);
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
