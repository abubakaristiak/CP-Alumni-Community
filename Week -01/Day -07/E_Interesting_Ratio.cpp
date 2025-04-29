/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-29 || 10:49:13
 * * * * File    : E_lleresting_Ratio.cpp
*/

// https://codeforces.com/problemset/problem/2091/E

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

const ll MAX=1e7+1;
vector<bool> isPrime(MAX, true);
vector<ll> prime;

void sieve(){
    isPrime[0]=isPrime[1]=false;
    for(ll i=2; i*i<=MAX; i++){
        if(isPrime[i]){
            for(ll j=i*i; j<=MAX; j+=i){
                isPrime[j]=false;
            }
        }
    }
    for(ll i=2; i<=MAX; i++){
        if(isPrime[i]){
            prime.push_back(i);
        }
    }

}
void solve()
{
    ll n; cin >> n;
    ll ans=0LL;
    for(int val:prime){
        if(val>n){
            break;
        }
        ans+=n/val;
    }
    cout << ans << endl;
    
}


int main()
{
    fast();
    sieve();
    ll t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}