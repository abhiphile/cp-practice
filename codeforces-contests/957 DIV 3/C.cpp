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
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> arr1, arr2;

    for(int i=1;i<=n;i++){
        if(i > m and i<k) arr1.push_back(i);
        else if(i<=m) arr2.push_back(i);
    }

    for(int i=n;i>=k;i--) cout<<i<<" ";
    for(int x:arr1) cout<<x<<" ";
    for(int x:arr2) cout<<x<<" ";
    cout<<endl;
    return;
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