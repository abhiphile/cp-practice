/*
    This is based on the monotonic function of two types.
    1. [0, 0, 0, 0, 1 , 1]
    2. [1, 1, 1, 1, 0, 0, 0, 0]
*/

#include<bits/stdc++.h>
using namespace std;

int form1_search(vector<int> &v){
    // Finding first 1 in the sequence
    int lo = 0;
    int hi = v.size() - 1;
    int mid = 0;
    while(hi - lo > 1){
        mid = (hi + lo)/2;
        if(v[mid] == 0) lo = mid + 1;
        else hi = mid;
    }
    if(v[lo] == 1) return lo;
    else if(v[hi] == 1) return hi;
    else return -1;
}

int form2_search(vector<int>&arr){
    int lo = 0, hi = arr.size()-1, mid = 0;
    while(hi - lo > 1){
        mid = (hi + lo)/2;
        if(arr[mid] == 1) lo = mid + 1;
        else hi = mid;
    }
    if(0 == arr[lo]) return lo;
    else if(0 == arr[hi]) return hi;
    else return -1;
}

int main(){
    vector<int> form1 = {0,0,0,1,1,1, 1};
    vector<int> form2 = {1, 1, 1, 1, 0, 0, 0, 0};
    cout << form1_search(form1)<<endl;
    cout<<form2_search(form2)<<endl;
    return 0;
}
