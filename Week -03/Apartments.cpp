/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-05-30 || 21:23:44
 * * * * File    : Apartments.cpp
*//*
||-----------------------------------||
||        Abu Bakar Istiak           ||
||     Chattogram Polytechnic        ||
||        Department of CST          ||
||    abubakar119147@gmail.com       ||
||-----------------------------------||
*/

// https://cses.fi/problemset/task/1084/

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
    int n,m,k; cin >> n >> m >> k;
    vector<int> applicants(n);
    vector<int> apartments(m);
    for(int i=0; i<n; i++){
        cin >> applicants[i];
    }
    for(int i=0; i<m; i++){
        cin >> apartments[i];
    }
    asort(applicants);
    asort(apartments);

    int i=0, j=0, cnt=0;
    while (i<n && j<m)
    {
        if(abs(applicants[i]-apartments[j])<=k){
            cnt++;
            i++;
            j++;
        }else if(apartments[j]<applicants[i]-k){
            j++;
        }else i++;
    }
    cout << cnt << endl;
    
}


int main() {
    fast();
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;

    // Alhamdulillah
}