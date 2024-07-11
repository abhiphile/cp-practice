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
    int a, b, c;
    cin>>a>>b>>c;
    int res = INT_MIN;
    for(int i=0;i<=5;i++){
        for(int j=0;j<=5;j++){
            for(int k=0;k<=5;k++){
                if(i + j + k == 5){
                    res = max(res, (a+i)*(b+j)*(c+k));
                }
            }
        }
    }
    cout<<res<<endl;
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