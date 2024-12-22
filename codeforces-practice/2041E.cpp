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
    int median, mean;
    cin>>mean>>median;
    if(median == mean){
        cout<<1<<endl;
        cout<<mean<<endl;
        return;
    }
    cout<<3<<endl;
    cout<<median-1<<" "<<median<< " "<<mean * 3 - 2 * median + 1<<endl;
    return;
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