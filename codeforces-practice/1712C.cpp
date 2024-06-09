/*
    Rating : 1100
    https://codeforces.com/contest/1712/problem/C
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        set<ll> st;
        for(int i=0;i<n;i++) cin>>v[i];
        if(n == 1){
            cout << 0 << endl;
            continue;
        }


        // find last index where the array is decreasing
        ll last = -1;
        ll last2 = -1;
        for(int i=n-1;i>0;i--){
            if(v[i] < v[i-1]){
                last = i - 1;
                break;
            }
        }
        if(last == -1){
            cout << 0 << endl;
            continue;
        }
        for(int i=0;i<=last;i++){
            st.insert(v[i]);
        }
        for(int i=n-1;i>last;i--){
            if(st.find(v[i]) != st.end()){
                last2 = i;
                break;
            }
        }
        if(last2 != -1)
        for(int i = last2;i>last;i--){
            st.insert(v[i]);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}