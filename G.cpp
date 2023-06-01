#pragma region COMPETITIVE PROGRAMMING HEADER

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>

using namespace std;

// Utility macros

#define forn(i, n) for (int i = 0; i < int(n); ++i)
#define forr(i, a, b) for (int i = int(a); i <= int(b); ++i)
#define ford(i, a, b) for (int i = int(a); i >= int(b); --i)
#define all(c) begin(c), end(c)
#define sz(c) int(c.size())
#define pb push_back
#define mp make_pair
#define fi first
#define se second

// Typedefs

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pii;

// Constants

const int INF = 1e9 + 7;

// Inline functions

inline int add(int a, int b) { return int((ll(a) + b) % INF); }
inline int sub(int a, int b) { return int((ll(a) - b + INF) % INF); }
inline int mul(int a, int b) { return int((ll(a) * b) % INF); }
inline int powmod(int a, int b) { int res = 1; while (b > 0) { if (b & 1) res = mul(res, a); a = mul(a, a); b >>= 1; } return res;}

#pragma endregion COMPETITIVE PROGRAMMING HEADER

ll solve(string s){
    ll cur = 0, mn = 0, res = s.length();
    ll sl = res;

    for (int i = 0; i < sl; i++) {
            cur += (s[i] == '+') ? 1 : -1;
            if (cur < mn) {
                mn = cur;
                res += i + 1;
            }
        }
    
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        cout<<solve(s)<<endl;
    }

    return 0;
}
