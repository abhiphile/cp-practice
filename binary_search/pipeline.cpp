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

ll sum(ll n){
    /*
        Calculates the sum of n natural numbers.
    */
   return (n*(n+1))/2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin >> n >> k;
    ll s = sum(k-1);
    if(n - 1 > s){
        cout<<-1<<endl;
    }
    else{
        ll hi = k - 1;
        ll lo = 0;
        while(lo<=hi){
            ll mid = lo + (hi - lo)/2;
            if(n - 1<= s - sum(mid)){
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }
        cout<<k-1-hi<<endl;
    }
    return 0;
}