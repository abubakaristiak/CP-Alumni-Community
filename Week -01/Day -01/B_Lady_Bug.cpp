/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-09 || 09:17:22
 * * * * File    : B_Lady_Bug.cpp
*/

// https://codeforces.com/contest/2092/problem/B


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
    int n; cin >> n; 
    string a,b; cin >> a >> b;
    int a_odd1=0, a_even1=0, b_odd0=0, b_even0=0;
    for(int i=0; i<n; i++){
        if(i%2==0){
            if(a[i]=='1'){
                a_even1++;
            }
            if(b[i]=='0'){
                b_even0++;
            }
        }else{
            if(a[i]=='1'){
                a_odd1++;
            }
            if(b[i]=='0'){
                b_odd0++;
            }
        }
    }
    if(a_even1<=b_odd0 && a_odd1<=b_even0){
        yes;
    }else no;
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