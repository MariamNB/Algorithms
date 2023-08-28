#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define endl cout << '\n'
#define vint vector<int>
#define vll vector<ll>
#define pb push_back
#define S second
#define F first
#define wl int t; cin >> t; while(t--)
#define sort(v) sort(v.begin(),v.end())
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void insrtionsort(vint &v, int n);

int main() {

    vint v = {20, 5, 3, 1, 9, 4};
    cout << "Before insertion sort :\n";
    for(auto &i: v) cout << i << ' '; endl;

    insrtionsort(v, 6);

    cout << "After insertion sort :\n";
    for(auto &i: v) cout << i << ' '; endl;


}

/* the complexity of insertion sort is : O(n²) */

void insrtionsort(vint &v, int n){

    int key, z;

    for(int i = 1 ; i < n; i++){

        key = v[i];
        z = i - 1;

        while (z >= 0 && v[z] > key){
            v[z+1] = v[z];
            z--;
        }

        v[z+1] = key;
    }

}

