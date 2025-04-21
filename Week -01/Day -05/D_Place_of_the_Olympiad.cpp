/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-21 || 23:24:32
 * * * * File    : D_Place_of_the_Olympiad.cpp
*/

// https://codeforces.com/problemset/problem/2091/D

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
    ll n,m,k; cin >> n >> m >> k;
    ll low=1, high=m;
    while (low<high)
    {
        ll mid=(low+high)/2;;
        if(n*(mid*(m/(mid+1))+m%(mid+1))>=k){
            high=mid;
        }else{
            low=mid+1;
        }
    }
    cout << low << endl;
    
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