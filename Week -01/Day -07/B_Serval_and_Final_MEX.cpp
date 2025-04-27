/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-27 || 20:03:04
 * * * * File    : B_Serval_and_Final_MEX.cpp
*/

// https://codeforces.com/problemset/problem/2085/B

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
    vector<int> v(n);
    int cnt=0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i]==0){
            cnt++;
        }
    }
    if(cnt==0){
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
        return;
    }
    if(cnt==n){
        cout << 3 << endl;
        cout << n-1 << " " << n << endl;
        cout << 1 << " " << n-2 << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }
    vector<int> ans;
    vector<pair<int, int>> op;

    for(int i=0; i<n; i++){
        if(v[i]==0){
            if(i==n-1){
                op.push_back({ans.size(), ans.size()+1});
            }else{
                op.push_back({ans.size()+1, ans.size()+2});
                ans.push_back(5);
                i++;
            }
        }else{
            ans.push_back(5);
        }
    }
    op.push_back({1,ans.size()});
    cout << op.size() << endl;
    for(auto it:op){
        cout << it.first << " " << it.second << endl;
    }
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