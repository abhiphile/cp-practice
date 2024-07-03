/*
TAGS : BINARY SEARCH
PROBLEM : https://codeforces.com/problemset/problem/474/B
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
    int n, m;

    cin>>n;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++)  cin >> arr1[i];
    
    cin>>m;
    vector<int> arr2(m);
    for (int i = 0; i < m; i++) cin >> arr2[i];


    vector<int> arr3(n);
    arr3[0] = arr1[0];
    for(int i=1;i<n;i++) arr3[i] = arr1[i] + arr3[i-1];

    // finding the upper and lower bound of the number m times
    for (int i = 0; i < m; i++)
    {
        int t = arr2[i];
        int lo = 0, hi = n - 1;
        // find the lower bound of target t
        while(hi>lo){
            int mid = lo + (hi - lo)/2;
            if(arr3[mid] < t) lo = mid + 1;
            else hi = mid;
        }
        cout<< lo + 1<<endl;
    }

    return 0;
}