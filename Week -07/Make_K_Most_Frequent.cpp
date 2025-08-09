/*
||-----------------------------------||
||        Abu Bakar Istiak           ||
||     Chattogram Polytechnic        ||
||        Department of CST          ||
||    abubakar119147@gmail.com       ||
||-----------------------------------||
*/
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
    int n,k; cin >> n >> k;
    vector<int> v(n);
    vector<int> cnt(21);

    for(int i=0; i<n; i++){
        cin >> v[i];
        cnt[v[i]]++;
    }
    int mx=*max_element(cnt.begin(), cnt.end());
    if(cnt[k]==mx){
        cout << 0 << endl;
        return;
    }
    
    vector<int> prefixCnt=cnt;
    for(int i=0; i<n; i++){
        mx=*max_element(prefixCnt.begin(), prefixCnt.end());
        if(prefixCnt[k]==mx){
            cout << 1 << endl;
            return;
        }
        prefixCnt[v[i]]--;
    }

    vector<int> suffixCnt=cnt;
    for(int i=n-1; i>=0; i--){
        mx=*max_element(suffixCnt.begin(), suffixCnt.end());
        if(suffixCnt[k]==mx){
            cout << 1 << endl;
            return;
        }
        suffixCnt[v[i]]--;
    }
    cout << 2 << endl;
}


int main() {
    fast();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;

    // Alhamdulillah
}