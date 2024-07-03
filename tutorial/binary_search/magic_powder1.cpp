/*
    PROBLEM : https://codeforces.com/contest/670/problem/D1
    TAGS : Binary Search
    SOURCE : STRIVERS-CP SHEET
    APPROACH :  
    Apply binary search on the monotonic function.
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

int n,k;
vector<int> req;
vector<int> aval;
bool canmake(int x){
    if(x == 0) return 1;
    vector<int> cn(n);
    int tc = 0;
    for(int i=0;i<n;i++){
        cn[i] = aval[i] - x*req[i];
        if(cn[i] < 0) tc+=abs(cn[i]);
    }
    if(tc <= k) return 1;
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>k;
    req.resize(n);
    aval.resize(n);

    for(int i=0;i<n;i++) cin>>req[i];
    for(int i=0;i<n;i++) cin>>aval[i];

    int lo = 1;
    int hi = 100000;
    int mid, ans = 0;
    while(hi >= lo){
        mid = lo + (hi - lo)/2;
        if(canmake(mid)){
            lo = mid + 1;
            ans = mid;
        }
        else{
            hi = mid - 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}