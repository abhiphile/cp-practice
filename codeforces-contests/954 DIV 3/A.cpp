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

void solve(){
    vector<int> arr(3, 0);
    for(int i=0;i<3;i++) cin>>arr;
    sort(arr.begin(), arr.end());

    int minans = INT_MAX;

    for(int i=arr[0];i<=arr[2];i++){
        minans = min(minans, (abs(i - arr[0]) + abs(i - arr[1])+ abs(i - arr[2])));
        // cout<<i<<endl;
    }
    cout<<minans<<endl;
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
