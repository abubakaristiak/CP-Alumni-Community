/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-11 || 21:38:26
 * * * * File    : B_Team_Training.cpp
*/


// https://codeforces.com/problemset/problem/2091/B


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n,x; cin >> n >> x; 
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    rsort(v);
    
    int idx=-1, team=0;
    for(int i=0; i<n; i++){
        if(v[i] * (i-idx) >= x){
            team++;
            idx=i;
        }
    }
    cout << team << endl;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}