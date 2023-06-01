#pragma region My Header
//COMPETITIVE PROGRAMMING HEADER

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

//END OF HEADER
#pragma endregion My Header

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        //la suma de los primeros k impares es k^2

        if (powmod(k,2) <= n and n%2 == k%2) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }

    return 0;
}
