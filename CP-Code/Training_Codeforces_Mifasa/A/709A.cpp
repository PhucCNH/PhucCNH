#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie();
#define fi first
#define se second
#define ll long long
#define EL "\n";
#define time cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n "
#define db(x) do { std::cerr << #x << ": " << x << EL;} while (0)
#define int long

const int inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);
const int NMAX = 1e6 + 10;

using namespace std;

int n,b,d,a[NMAX];

signed main() {
	fastio	
	int cum = 0;
	int res = 0;
	cin >> n >> b >> d;
	for (int i = 1;i<=n;i++) {
		cin >> a[i];
		if (a[i] > b) continue;
		cum += a[i];
		if (cum > d) {
			res++;
			cum = 0;
		}
	}
	if (cum > d) res++;
	cout << res;
	return 0;
}
// Code cua Phuc ༼ つ ◕_◕ ༽つ
