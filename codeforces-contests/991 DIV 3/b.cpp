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
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    // calculating sums
    ll sum1=0,sum2=0,sum=0;
    for(int i=0;i<n;i++){
        if((i & 1)) sum1 += arr[i];
        else sum2 += arr[i];
        sum += arr[i];
    }
    int nee = n/2;
    int noo = n - nee;

    if(sum % n == 0){
        if(((sum1 * noo == sum2 * nee) and (sum1*n == sum * nee))) yes;
        else no;
    }
    else no;
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