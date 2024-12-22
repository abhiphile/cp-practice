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

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> arr(2, vector<int>(n, 0));
    for(int i=0;i<n;i++) cin>>arr[0][i];
    for(int i=0;i<n;i++) cin>>arr[1][i];
    ll ans = INT_MIN;
    for(int j=0;j<n;j++){
        ll temp = arr[0][j] + arr[1][j]; // both columns
        for(int j1=0;j1<n;j1++){
            if(j1 == j) continue;
            temp += max(arr[0][j1], arr[1][j1]);
        }
        ans = max(ans, temp);
    }
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}