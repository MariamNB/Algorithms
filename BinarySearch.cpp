#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define endl cout << '\n'
#define vint vector<int>
#define vll vector<ll>
#define pb push_back
#define wl int t; cin >> t; while(t--)
#define sort(v) sort(v.begin(),v.end())
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

/* Regular binary search */
int binarySearch(vint v, int target){

    int low = 0, high = v.size()-1;

    while (low <= high){
        int mid = (low + high)/2;
        if(v[mid] == target)
            return mid;
        else if(target > v[mid])
            low = mid +1;
        else
            high = mid -1;
    }
    return -1;
}
/* Binary search finding the first occurance of target */
int binarySearchFirst(vint v, int target){
    int low = 0, high = v.size()-1, first = -1;

    while (low <= high){
        int mid = (low + high) /2;

        if(v[mid] == target){
            first = mid;
            high = mid -1;
        }
        else if(target > v[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return first;
}
/* Binary search finding the lastoccurance of target */
int binarySearchLast(vint v, int target){
    int low = 0, high = v.size()-1, last = -1;

    while (low <= high){
        int mid = (low + high) /2;

        if(v[mid] == target){
            last = mid;
            low = mid + 1;
        }
        else if(target > v[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return last;
}
int main() {
    
    /* The complexity of the binary search algorithm is O(log n). */

    /* Binary search works only on sorted data */
    vint v = {1, 3, 5, 5, 5, 10};

    /* Regular binary search */
    cout << "value found at index: " << binarySearch(v, 3);
    endl;

    /* Binary Search finding first occurence of duplicate values */
    cout << "value found at index: " << binarySearchFirst(v, 5);
    endl;

    /* Binary Search finding last occurence of duplicate values */
    cout << "value found at index: " << binarySearchLast(v, 5);


}
