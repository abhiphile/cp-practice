/*
    Rating : 1300
    Link : https://codeforces.com/problemset/problem/1980/C

    Sofia and the Lost Operations
    =============================
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
    int n, m;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    cin>>m;
    vector<int> d(m);
    for(int i=0;i<m;i++) cin>>d[i]; // the change array having the operations
    map<int, int> freq;
    for(int num:d) freq[num]++;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(a[i] == b[i]) continue;
        cnt++;
        if(freq.find(b[i]) == freq.end() or freq[b[i]]<=0){
            no;
            return;
        }
        freq[b[i]]--;
        if(cnt > m){
            no;
            return;
        }
    }
    set<int> st;
    for(int num:b) st.insert(num);

    for(int num:d){
        if(st.find(num) == st.end()){
            no;
            return;
        }
    }
    yes;
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