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
    int n, k;
    cin>>n>>k;
    vector<int> arr(k);
    for(int i=0;i<k;i++) cin>>arr[i];
    // code
    sort(arr.begin(), arr.end());
    ll res = 0;
    ll two = 2;
    ll one = 1;
    for(int i=0;i<k-1;i++){
        if(arr[i] == 1) res+=one;
        else if(arr[i] == 2) res+=two+1;
        else res+=((2*arr[i]) - 1);
    }
    cout<<res<<endl;

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