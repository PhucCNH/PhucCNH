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

using namespace std;

int k,l,m;
int f[1000001];
int a[1000001];

signed main() {
	fastio
	cin >> k >> l >> m;
	int maxx = -1;
	for (int i = 1;i<=m;i++) {
		cin >> a[i];
		maxx = max(maxx,a[i]);
	}
	for (int i = 1;i<=maxx;i++) {
		if (i - 1 >= 0 && f[i-1] == 0) f[i] = 1;
		if (i - l >= 0 && f[i-l] == 0) f[i] = 1;
		if (i - k >= 0 && f[i-k] == 0) f[i] = 1;  
	}
	for (int i = 1;i<=m;i++) {
		if (f[a[i]]) cout << "A";
		else cout << "B";
	}
	
	

	return 0;
}
// Code cua Phuc ༼ つ ◕_◕ ༽つ
