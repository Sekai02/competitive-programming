/*
	Template

	Notes: Sekai02's C++ template
*/

#include <bits/stdc++.h>

#define endl '\n'

#define lcm(a, b) (a / __gcd(a, b) * b)
#define sz(v) ((int)v.size())

using namespace std;

using lld = long long;
using ull = unsigned long long;

mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
// mt19937_64 rng(61378913);
/* usage - just do rng() */

const vector<int32_t> movx = {0, 0, 1, -1};
const vector<int32_t> movy = {1, -1, 0, 0};

const int maxn = 2e5 + 5;
const int inf = 1e9;
const int mod = 1e9 + 7;
const double pi = acos(-1); // or 3.14159265358979323846

int modpow(int a, int b)
{
    int ret = 1;

    while (b)
    {
        if (b & 1)
            ret = (ret * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }

    return ret;
}

int modinv(int a)
{
    return modpow(a, mod - 2);
}

void solve()
{
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
