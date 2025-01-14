#include<bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;

const int mod=1e9+7;
const ll MOD=1e18;

const int sz = 2;

struct Mat {
	int m[sz][sz];
	Mat() {
		memset(m, 0, sizeof(m));
	}
	void identity() {
		for (int i = 0; i < sz; i++) {
			m[i][i] = 1;
		}
	}
	Mat operator* (Mat a) {
		Mat res;
		for (int i = 0; i < sz; i++) {
			for (int j = 0; j < sz; j++) {
				for (int k = 0; k < sz; k++) {
					res.m[i][j] += m[i][k] * a.m[k][j];
					res.m[i][j] %= mod;
				}
			}
		}
		return res;
	}
};

int Fib(int n) {
	Mat res;
	res.identity();
	Mat T;
	T.m[0][0] = T.m[0][1] = T.m[1][0] = 1;

	if (n <= 2) return 1;
	n -= 2;

	// log(n)
	while (n) {
		if (n & 1) res = res * T;
		T = T * T;
		n /= 2;
	}

	return (res.m[0][0] + res.m[0][1]) % mod;
}
int main(){
int t;
cin>>t;

while(t--){
	int n,m;
	cin>>n>>m;

	cout<< (Fib(m+2)-Fib(n+1)+mod)%mod << "\n";
}
return 0;
}
