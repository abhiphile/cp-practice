/*
    Rating : 1200
    Link : https://codeforces.com/contest/872/problem/B
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
    int n, k;
    cin>>n>>k;
    vector<int> arr(n, 0);
    for(int i=0;i<n;i++) cin>>arr[i];
    if(k == 1){
        int mini = INT_MAX;
        for(int x:arr) mini = min(mini, x);
        cout<<mini<<endl;
    }
    else if(k==2){
        if(arr[0]>=arr[n-1]){
            int mini = INT_MAX;
            for(int i=1;i<n;i++) mini = min(mini, arr[i]);
            cout<<max(mini, arr[0]);
        }
        else{
            int mini = INT_MAX;
            for(int i=0;i<n-1;i++) mini = min(mini, arr[i]);
            cout<<max(mini, arr[n-1]);
        }
    }
    else{
        int maxi = INT_MIN;
        for(int i=0;i<n;i++) maxi=max(maxi, arr[i]);
        cout<<maxi<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}