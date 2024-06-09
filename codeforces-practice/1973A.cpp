// /*
//     Rating : 900
//     https://codeforces.com/problemset/problem/1973/A

// */
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define endl '\n'
// #define all(x) x.begin(), x.end()
// #define rall(x) x.rbegin(), x.rend()
// #define yes cout << "YES" << '\n'
// #define no cout << "NO" << '\n'
// #define mod 1000000007;

// // int main()
// // {
// //     ios::sync_with_stdio(false);
// //     cin.tie(0);
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         vector<int> v(3);
// //         cin >> v[0] >> v[1] >> v[2];
// //         if ((v[0] + v[1] + v[2]) % 2 == 1)
// //         {
// //             cout << "-1\n";/*
// //     To find all the divisors of a given number.
// //     T.C = N * log(N)
// // */
// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e5;
// vector<int> divisors[N];

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     divisors[0].push_back(0);
//     divisors[1].push_back(1);

//     for (int i = 2; i < N; i++)
//     {
//         divisors[i].push_back(1);
//         for (int j = i; j < N; j += i)
//         {
//             divisors[j].push_back(i);
//         }
//     }
//     for (int i = 1; i < 21; i++)
//     {
//         for (int x : divisors[i])
//             cout << x << " ";
//         cout << endl;
//     }
//     return 0;
// }
//             continue;
//         }
//         cout << (v[0] + v[1] + v[2] - max(0, v[2] - v[0] - v[1])) / 2 << "\n";
//     }
//     return 0;
// }