/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-20 || 23:27:09
 * * * * File    : B_Pushing_Balls.cpp
*/

// https://codeforces.com/problemset/problem/2090/B

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
    int n,m; cin >> n >> m;
    char ar[n+10][m+10];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> ar[i][j];
        }
    }
    bool ok=false;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(ar[i][j]=='1'){
                int cnt=0, cnt1=0;
                for(int k=i; k>=1; k--){
                    cnt++;
                    if(ar[k][j]=='1'){
                        cnt1++;
                    }
                }
                if(cnt!=cnt1){
                    int cnt2=0, cnt3=0;
                    for(int k=j; k>=1; k--){
                        cnt2++;
                        if(ar[i][k]=='1'){
                            cnt3++;
                        }
                    }
                    if(cnt2!=cnt3){
                        ok=true;
                        break;
                    }
                }
            }
        }
        if(ok){
            break;;
        }
    }
    if(ok){
        no;
    }else yes;
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