/*
    Rating : 1100
    https://codeforces.com/contest/1933/problem/C
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define MOD 1000000007;
const int N = 1e6;

ull mypow(ull a, ull b){ ull ans = 1; a%=MOD; while(b){ if (b&1) ans = (ans*a) % MOD; a = (a*a) % MOD; b >>= 1;} return ans; }

void solve(){
    ll a, b, l;
    cin>>a>>b>>l;
    set<ll> st;
    for(int i=0;mypow(a,i)<=l;i++){
        for(int j=0;mypow(b, j)<=l;j++){
            ll res = mypow(a,i) * mypow(b, j);
            if(l % res == 0) st.insert(l/res);
        }
    }
    cout<<st.size()<<endl;
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // taking the inputs
    int k;
    cin >> k;
    while(k--){
        solve();
    }
    return 0;
}