/*
    Basic implementation of binary search on a sorted array.
    Time complexity = O(log(N))
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // input array size
    cin >> n;
    vector<int> arr(n); // input array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target; // target element to search
    cin >> target;
    int low = 0, high = n - 1;
    while (high - low > 1)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    if (arr[low] == target)
    {
        cout << low << endl;
    }
    else if (arr[high] == target)
    {
        cout << high << endl;
    }
    else
    {
        cout << "Element Not found" << endl;
    }
    return 0;
}