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


// merge two subarrays
// first is arr[st..mid]
// second is arr[m+1..end]
void merge(vint &v, int left, int mid, int right){


    // create temp arrays
    vint L(mid - left + 1), R(right - mid);

    //copy data to temp arrays L[] and R[]
    for(int i = 0; i < L.size(); i++) L[i] = v[left+i];
    for(int z = 0; z < R.size(); z++) R[z] = v[mid+1+z];

    //merge the temp arrays back into arr[l..r]
    int i = 0, z = 0, k = left;
    while (i < L.size() && z < R.size()){
        if(L[i] < R[z]){
            v[k] = L[i++];
        }else{
            v[k] = R[z++];
        }
        k++;
    }

    //copy the remaining elements of L[], if there are any
    while (i < L.size()){
        v[k] = L[i++];
        k++;
    }
    //copy the remaining elements of R[], if there are any
    while (z < R.size()){
        v[k] = R[z];
        k++; z++;
    }
}

void mergesort(vint &v, int l, int r){
    if(l < r){
        //same as (l+r)/2 but avoid overflow for large l and h
        int mid = l + (r - l) / 2;

        //sort the first and second halves
        mergesort(v, l, mid);
        mergesort(v, mid + 1, r);

        merge(v, l, mid, r);
    }
}

void printVector(vint v){
    for(auto &i :v) cout << i << ' ';
}
int main() {
    /* the complexity of merge sort is: O(n*log n) */
    vint v = {14, 11, 1, 5, 20};

    printf("Given array is:\n");
    printVector(v);

    mergesort(v, 0, v.size()-1);

    printf("sorted array is:\n");
    printVector(v);
}
