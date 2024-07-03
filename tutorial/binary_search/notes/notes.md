# Binary Search 
Binary search can be implemented to find out a number in `sorted` array or in a `monotonic` array.
## Implementation of Binary Search in a Sorted Array
```
#include <bits/stdc++.h>
using namespace std;

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
```
## Understanding Lower Bound and Upper bound in _Binary Search_.
### Lower bound
Lower bound returns an iterator pointing to the first element in the range `[first, last)` which has a value greater than a given `target` value.
```
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
```
### Upper bound
Upper bound returns the first number greater than a given `target` value.
```
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
```
## Implementation of Binary search in a a monotonic function / Array.
An example of monotonic array is the bit sequence. eg : `[1, 1, 1, 1, 1, 0, 0, 0]` or the sequence like `[0, 0, 0, 1, 1, 1, 1, 1]`

### For the Sequence like `[0, 0, 0, 1, 1, 1]` :
__Finding the first 1__ :


### For the Sequence of the form `[1, 1, 1, 1, 1, 0, 0, 0]` :
__Finding the first 0__ :