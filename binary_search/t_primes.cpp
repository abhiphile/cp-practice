/*
    PROBLEM : https://codeforces.com/contest/230/problem/B
*/
// #include<bits/stdc++.h>
// using namespace std;
// bool isPrime(long long number){

//     if(number < 2) return false;
//     if(number == 2) return true;
//     if(number % 2 == 0) return false;
//     for(int i=3; (i*i)<=number; i+=2){
//         if(number % i == 0 ) return false;
//     }
//     return true;

// }
// int main(){
//     int n;
//     cin>>n;
//     vector<long long> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         long long sq = sqrt(arr[i]);
//         if(sq*sq != arr[i]){
//             cout<<"NO"<<endl;
//         }
//         else{
//             // find is the number sq is prime or not
//             if(isPrime(sq)){
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
//             }
//         }
//     }
//     return 0;
    
// }
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
#define mod 1000000007
bool solve2(long long mid)
{   
    if(mid==1 || mid==0)return 0;
    if(mid==2)return 1;
    if(mid%2==0)return 0;
    for(long long i=3;(i*i)<=mid;i+=2){
        if(mid%i==0)return 0;
    }

    return 1;
}
bool solve(long long n) {
    long long squareRoot = sqrt(n);
    return (squareRoot * squareRoot == n) && (solve2(squareRoot));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    while(n--){
        long long x;
        cin>>x;
        if(solve(x))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       
    }
    return 0;
}