/*
    Rating : 1000
    https://codeforces.com/problemset/problem/1975/B
    Tags : Brute Force, Greedy, Math
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
    int n;
    cin>>n;
    vector<int> arr(n, 0);
    for(int i=0;i<n;i++) cin>>arr[i];
    // Code
    sort(arr.begin(), arr.end());
    int ai = arr[0];
    int aj = INT_MAX;
    if(ai == 1){
        yes;
        return;
    }
    for(int i=1;i<n;i++){
        if((arr[i] % ai != 0) and (aj == INT_MAX)){
            aj = arr[i];
        }
        else if((arr[i]%ai == 0) or (arr[i]%aj == 0)){
        }
        else{
            no;
            return;
        }
    }
    yes;
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}