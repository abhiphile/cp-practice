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

ll calcSum(ll ip){
    if(ip < 10) return ip;
    ll res = 0;
    while(ip != 0){
        res += ip % 10;
        ip /= 10;
    }
    return calcSum(res);
}

void solve(){
    string s;
    cin>>s;
    ll sum = 0;
    int n2 = 0, n3 = 0;
    for(char ch:s){
        sum += (ch - '0');
        if(ch == '2') n2++;
        if(ch == '3') n3++;
    }
    sum = calcSum(sum);
    if(sum % 9 == 0){
        yes;
        return;
    } 
    for(int i=1;i<=n2;i++){
        if((sum + i*2) % 3 == 0){
            ll nrs = calcSum(sum + i*2);
            if(nrs == 0) {
                yes;
                return;
            }
            else if((nrs == 3) and (n3 > 0)){
                yes;
                return;
            }
            else if((nrs == 6) and (n3 > 1)){
                yes;
                return;
            }
            else if(nrs == 9){
                yes;
                return;
            }
        }
    }
    for(int i=1;i<=n3;i++){
        if((sum + i*6)%9 == 0){
            yes;
            return;
        }
    }

    no;
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