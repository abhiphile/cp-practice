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
    cin>>n>>m;
    vector<int> s;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.push_back(str.length());
    }
    int wrds = 0;
    int curr = 0;
    for(int i=0;i<n;i++){
        curr += s[i];
        if(curr <= m) wrds = i + 1;
        else break;
    }
    cout<<wrds<<endl;
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