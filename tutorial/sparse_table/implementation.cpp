/*
    Implementation of sparse tables to find the min in a range [l, r]
    -----------------------------------------------------------------
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

// sparse table
vector<vector<int>> m;
void make_sparse_table(vector<int>&arr){
    int n = arr.size();
    int LOG = 31 - __builtin_clz(n);
    m.resize(n, vector<int>(LOG, 0));
    for(int i=0;i<=LOG;i++){
        for(int j=0;j<n-(1<<i)+1;j++){
            if(i == 0) m[j][i] = arr[j];
            else 
            m[j][i]  = min(m[j][i-1], m[j+(i<<(i-1))][i-1]);
        }
    }
}

// Query function
int q(int l, int r){
    int diff = r-l;
    int LOG = 31 - __builtin_clz(diff);
    return min(m[l][LOG], m[r-(1<<LOG)+1][LOG]);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {2, 4, 6, 1, 6, 10, 23, 2};
    make_sparse_table(arr);
    cout<<q(0, 4)<<endl;
    return 0;
}