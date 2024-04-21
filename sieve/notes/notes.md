# Sieve Algorithm
## Sieve algorithm to find out all the prime numbers in a given range.

### Basic implementation of the sieve algorithm.
The time complexity of this algorithm is `N*log(log(N))` because it runs for 
$n/3 + n/ 5 + n/7 + ... n/n = n * log(log(n))$
```
#include <bits/stdc++.h>
using namespace std;

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
```
## Find the highest and lowest prime factor of a number.
1. Hightest prime is the last prime factor of any number.
2. Lowest prime factor is the first prime factor of the number.
```
#include <bits/stdc++.h>
using namespace std;
const int N = 1e7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // To find highest and lowest prime of an number till N
    vector<bool> isPrime(N, 1);
    vector<int> lp(N, 0);
    vector<int> hp(N, 0);
    isPrime[0] = isPrime[1] = 0;
    for(int i=2;i<N;i++){
        if(isPrime[i]){
            lp[i] = hp[i] = i; //prime factor of a prime no is that itself.
            for(int j = 2*i;j<N;j+=i){
                isPrime[j] = 0;
                hp[j] = i; //highest prime factor is the last prime factor.
                if(lp[j] == 0) lp[j] = i; //lowest prime factor is the first prime factor.
            }
        }
    }

    for(int i = 2;i<=100;i++){
        cout<<i<<" Lowest prime : "<<lp[i]<<" highest Prime : "<<hp[i]<<endl;

    }
    return 0;
}
```
## Prime Factorization by using sieve algorithm.
1. We can either use `hp` or `lp` for the computation of all the prime factors.
2. Divide the number by corresponding `hp` or `lp` to get the prime factors.
### By using `hp` to get the output in descending order.
```
    int x = 30; // number to find prime factors of
    vector<int> pfs; // prime factors vector
    while(x > 1){
        int pf = hp[x];
        while(x % pf == 0){
            pfs.push_back(pf);
            x /= pf;
        }
    }
    for(int t : pfs){
        cout<<t<<" ";
    }
```
#### Output
```
5 3 2
```
### By using `lp` to get output in ascending order.
```
    vector<int> pfs; // prime factors vector
    while(x > 1){
        int pf = hp[x];
        while(x % pf == 0){
            pfs.push_back(pf);
            x /= pf;
        }
    }
```
#### Output
```
2 3 5
```

## Divisors variation of sieve algorithm.
To find out all the divisors of a given number using sieve algorithm.
- Time complexity of this algorithm is `n * log(n)` as it is of the form : $n/2 + n/3 + n/4 + n/5 + .... n/n = n * log(n)$
```
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> divisors[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    divisors[0].push_back(0);
    divisors[1].push_back(1);

    for (int i = 2; i < N; i++)
    {
        divisors[i].push_back(1);
        for (int j = i; j < N; j += i)
        {
            divisors[j].push_back(i);
        }
    }
    for (int i = 1; i < 100; i++)
    {
        for (int x : divisors[i])
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
```