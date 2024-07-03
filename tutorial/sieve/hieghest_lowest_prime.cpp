/*
    Sieve
    =====

    To find out the highest and lowest prime factor of a number.
*/
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
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i])
        {
            lp[i] = hp[i] = i; // prime factor of a prime no is that itself.
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = 0;
                hp[j] = i; // highest prime factor is the last prime factor.
                if (lp[j] == 0)
                    lp[j] = i; // lowest prime factor is the first prime factor.
            }
        }
    }

    for (int i = 2; i <= 100; i++)
    {
        cout << i << " Lowest prime : " << lp[i] << " highest Prime : " << hp[i] << endl;
    }
    return 0;
}