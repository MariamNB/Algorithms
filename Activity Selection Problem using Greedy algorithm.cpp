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
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define cnte(v, x) count(all(v), (x))
#define wl int t; cin >> t; while(t--)
#define sort(v) sort(v.begin(),v.end())
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

vector <int> activitySelectionProblem( vector<pair<int, int>> v){
    vector <int> res = {0};
    int i = 1, j = 0;

    for(; i < v.size(); i++){
        if(v[i].F >= v[j].S) {
            res.pb(i);
            j = i;
        }
    }

    return res;
}

int main() {

   /* Let's consider that you have n activities with their start and finish times, the objective
    * is to find solution set having maximum number of non-conflicting activities.
    * Greedy approach can be used to find the solution since we want to maximize the count of activities that can be executed.
    * This approach will greedily choose an activity with earliest finish time at every step, thus yielding an optimal solution.
    */
   
   
    /* the given activities must be in ascending order according to their finishing time. */ 
    vector <pair<int, int>> v = {{9,11}, {10, 11}, {11, 12}, {12, 14},{13, 15}, {15, 16}};

    vector <int> res = activitySelectionProblem(v);

    for(auto &i : res) cout << i << ' ';

}
