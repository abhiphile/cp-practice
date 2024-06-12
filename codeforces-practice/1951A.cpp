/*
    Rating : 900
    https://codeforces.com/problemset/problem/1951/A
    Unsolved
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
    string st;
    cin>>n;
    cin>>st;
    // code
    int cnt = 0;
    for(char x:st) if(x == '1') cnt++;
    if(cnt % 2 == 0) yes;
    else no;
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