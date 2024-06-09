/*
    Rating : 1100
    https://codeforces.com/contest/1099/problem/B
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
#define mod 10000000;

bool check(ll x, ll n){
    ll disc = x*x - 4*n;
    if(disc < 0) return false;
    if(sqrt(disc) * sqrt(disc) != disc) return false;
    ll sqrtdisc = sqrt(disc);
    ll num1 = x - sqrtdisc;
    ll num2 = x + sqrtdisc;
    ll den = 2;
    // if(!((num1 % 2 ==0) or (num2 % 2 ==0))) return false;
    // if(num1>0 or num2>0) return false;
    
    return true;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    if(n == 1) return 2;
    if(n == 2) return 3;
    ll lo = 1;
    ll hi = 3*n + 1;
    ll mid = 0;
    while (hi - lo > 1)
    {
        mid = lo + (hi - lo)/2;
        if(check(mid, n)) hi = mid;
        else lo = mid + 1;
    }
    // if(check(lo, n)) cout<<lo<<endl;
    // else if(check(hi, n)) cout<<hi<<endl;
    // else cout<<-1<<endl;
    cout<<check(5, n)<<endl;
    return  0;
}