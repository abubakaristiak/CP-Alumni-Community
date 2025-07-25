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

string isTrying(const string &s){
    string res;
    for(char ch:s){
        res+=ch;
        if(res.size()>=2 && res[res.size()-2]=='a' && res[res.size()-1]=='b'){
            res.pop_back();
        }
    }return res;
}

void solve() {
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    
    string x=isTrying(s);
    string y=isTrying(t);
    int sz1=x.size(), sz2=y.size();

    
    if(sz1 != sz2){
        cno;
        return;
    }
    bool ok=true;
    for(int i=0; i<min(sz1, sz2); i++){
        if(x[i]!=y[i]){
            cno;
            ok=false;
            break;
        }
    }
    if(ok){
        cyes;
    }

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