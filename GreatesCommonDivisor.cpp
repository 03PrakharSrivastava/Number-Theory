#include <bits/stdc++.h>
using namespace std;

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
typedef long long ll;

const int mod = 1e9 + 7;
const ll MOD = 1e18;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
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

        cout << gcd(a, b) << "\n";
    }
    return 0;
}