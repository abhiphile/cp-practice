/*
    Basic implementation of binary search on a sorted array.
    Time complexity = O(log(N))
*/
#include <bits/stdc++.h>
using namespace std;
int upper_bound(vector<int> &v, int target){
    /*
    Returns the index of upper bound of the given target.
    Upper bound is the first number which is strictly greater than the target.
    */
   int lo = 0, hi = v.size() - 1;
   while(hi - lo > 1){
        int mid = lo + (hi - lo)/2;
        if(v[mid] <= target) lo = mid + 1;
        else hi = mid;
   }
   if(v[lo] > target) return lo; // lo is before than hi
   else if(v[hi] > target) return hi;
   return -1;
}

int lower_bound(vector<int> &v, int target){
    /*
    Returns the index of lower bound of the given target.
    Lower bound is the first number which is less than or equal to the target.
    */
   int lo = 0, hi = v.size() - 1;
   while(hi - lo > 1){
        int mid = lo + (hi - lo)/2;
        if(v[mid] < target) lo = mid + 1;
        else hi = mid;
   }
   if(v[lo] >= target) return lo; // lo is before than hi
   else if(v[hi] >= target) return hi;
   return -1;
}

int main()
{
    int n; // input array size
    cin >> n;
    vector<int> arr(n); // input array
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    int target; // target element to search
    cin >> target;
    int low = 0, high = n - 1;
    while (high - low > 1)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] < target) low = mid + 1;
        else high = mid;
    }
    if (arr[low] == target) cout << low << endl;
    else if (arr[high] == target) cout << high << endl;
    else cout << "Element Not found" << endl;
    return 0;
}