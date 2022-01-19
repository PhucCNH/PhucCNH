#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie();
#define fi first
#define se second
#define ll long long
#define EL "\n";
#define time cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n "
#define db(x) do { std::cerr << #x << ": " << x << EL;} while (0)

const int inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);
const int N = 1000005;

using namespace std;

int res[N];

void generate() {
	for (int i = 1;i<=N;i++) {
		for (int j = 1;j<=N/i;j++) {
			res[i*j] += i;
		}
	}
	
}

signed main() {
	fastio
	generate();
	int l,r,ans = 0;
	cin >> l >> r;
	for (int i = l;i<=r;i++) {
		if (res[i] - i > i) ans++;
	}
	cout << ans;
	
	return 0;

}
// Code cua Phuc ༼ つ ◕_◕ ༽つ
