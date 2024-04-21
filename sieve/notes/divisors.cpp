/*
    To find all the divisors of a given number.
    T.C = N * log(N)
*/
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