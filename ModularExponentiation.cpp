#include <bits/stdc++.h>
using namespace std;

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
typedef long long ll;

const int mod = 1e9 + 7;
const ll MOD = 1e18;

int modExp(int base, int exp, int mod)
{
    int result = 1;
    base = base % mod;

    while (exp > 0)
    {
        if (exp % 2 == 1)
            result = (result * base) % mod;

        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return result;
}

int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        cout << modExp(a, b, mod) << "\n";
    }
    return 0;
}