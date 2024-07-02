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

ll findres(ll n, ll x){
    ll k = n/x;
    ll two = 2;
    ll one = 1;
    ll res = (x*(k)*(k+one))/two;
    // cout<<"Res is "<<res<<endl;
    return res;
} 
void solve(){
    ll n;
    cin>>n;
    // code
    ll mres = 0;
    ll maxx = 2;
    for(ll i = 2;i<=n;i++){
        if(mres <= findres(n, i)){
            mres = findres(n, i);
            maxx = i;
        }
    }
    cout<<maxx<<endl;
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