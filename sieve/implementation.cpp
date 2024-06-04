/*
    We need to compute all the prime numbers till the range 10^7
    The time complexity of the given algorithm will be N * log(log(N))
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



const int N = 1e7;
vector<bool> isPrime(N, 1);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    isPrime[0] = isPrime[1] = 0;
    for(int i = 2;i<N;i++){
        if(isPrime[i]){
            for(int j = i * 2;j<N;j+=i){
                isPrime[j] = 0;
            }
        }
    }
    
    for (int i = 0; i <= 100; i++)
    {
        if(isPrime[i]){
            cout<<i<<" is a Prime Number."<<endl;
        }
        else{
            cout<<i<<" is not a Prime Number"<<endl;
        }
    }
    
    
    return 0;
}