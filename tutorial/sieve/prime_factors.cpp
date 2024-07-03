/*
    Sieve
    =====

    To find out all the prime factors of a number.
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
    int x = 30;      // number to find prime factors of
    vector<int> pfs; // prime factors vector
    // By using hp sorted iin descending order.

    // while(x > 1){
    //     int pf = hp[x];
    //     while(x % pf == 0){
    //         pfs.push_back(pf);
    //         x /= pf;
    //     }
    // }

    // By using lp sorted in ascending order
    while (x > 1)
    {
        int pf = lp[x];
        while (x % pf == 0)
        {
            pfs.push_back(pf);
            x /= pf;
        }
    }

    for (int t : pfs)
    {
        cout << t << " ";
    }
    cout << endl;

    return 0;
}