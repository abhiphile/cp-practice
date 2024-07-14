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
    #define mod 1000000007

    vector<vector<int>> dp;
    bool canreach(int ind, int m, int k, string &water){
        if(k < 0) return 0;
        if(ind >= water.size()) return 0;

        if(water[ind] == 'L'){
            bool flag = false;
            for(int i=1; i<=m; i++){
                if(i+ind >= water.size()) return true;
                if(water[i+ind] != 'C') flag |= canreach(ind+i, m, k, water);
                if(flag) return 1;
            }
            return 0;
        }
        if(water[ind] == 'C'){
            return 1;
        }

        return canreach(ind+1, m, k-1, water);
    }

    void solve()
    {
        int n, m, k;
        cin >> n >> m >> k;
        string water;
        cin >> water;
        // dp.resize(n+1, vector<int>(n+1, -1));
        if(canreach(0, m, k, water)) yes;
        else no;
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
