/*
||-----------------------------------||
||        Abu Bakar Istiak           ||
||     Chattogram Polytechnic        ||
||        Department of CST          ||
||    abubakar119147@gmail.com       ||
||-----------------------------------||
*/

// https://codeforces.com/problemset/problem/1178/B

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define pi pair<ll, ll>
#define vi vector<ll>
#define vpi vector<pi>
#define pb push_back
#define endl "\n"
#define sp " "
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define sz(x) (ll)(x).size()
#define minus cout << -1 << endl
#define zero cout << 0 << endl
#define MAX 100000
#define MOD 998244353
#define afor(i,a,b) for (ll i = (a); i < (b); ++i)
#define rfor(i,a,b) for (ll i = (a); i >= (b); --i)
#define asort(v) sort((v).begin(), (v).end())
#define rsort(v) sort((v).begin(), (v).end(), greater<>())
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    string s; cin >> s;
    ll n=s.size();
    vector<ll> px(n,0);
    vector<ll> sx(n,0);

    for(ll i=1; i<n; i++){
        px[i]=px[i-1];
        if(s[i-1]=='v' && s[i]=='v'){
            px[i]++;
        }
    }

    for(ll i=n-2; i>=0; i--){
        sx[i]=sx[i+1];
        if(s[i+1]=='v' && s[i]=='v'){
            sx[i]++;
        }
    }
    ll res=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='o'){
            ll l=(i>0) ? px[i-1]:0;
            ll r=(i+1<n) ? sx[i+1]:0;
            res+=l*r;
        }
    }
    cout << res << endl;
}


int main() {
    fast();
    ll t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;

    // Alhamdulillah
}