#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie();
#define fi first
#define se second
#define ll long long
#define EL "\n"
#define time cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n "
#define db(val) "["#val" = "<<(val)<<"] "

const int inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);

using namespace std;

signed main() {
	fastio
	string s;
	cin >> s;
	char now = s[0];
	int res = 0;
	for (int i = 1;i<s.size();i++) {
		if (s[i] != now) {
			now = s[i];
			res++;
		}
	}
	cout << res;
	
	
	return 0;
}
// Code cua Phuc ༼ つ ◕_◕ ༽つ
