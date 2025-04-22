/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-22 || 22:14:29
 * * * * File    : C_Asuna_and_the_Mosquitoes.cpp
*/

// https://codeforces.com/problemset/problem/2092/C

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
    ll n; cin >> n;
    vector<int> v(n);
    ll evenCnt=0, oddCnt=0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i]%2==0){
            evenCnt++;
        }else{
            oddCnt++;
        }
    }
    if(evenCnt==0 || oddCnt==0){
        ll ans=*max_element(v.begin(), v.end());
        cout << ans << endl;
        return;
    }
    ll ans=accumulate(v.begin(), v.end(),0LL)-(oddCnt-1);
    cout << ans << endl;
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