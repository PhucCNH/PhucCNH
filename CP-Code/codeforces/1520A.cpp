#include<iostream>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cstring>
#include<vector>
#include<utility>
#include<set>
#include<queue>

using namespace std;

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<long long> bigNum;
typedef  vector<vector<int>> vii;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long 
#define fi first
#define se second 
#define pb push_back
#define EL "\n"
#define FOR(i,a,b) for (int i = a;i<=b;i++) 
#define DEC(i,a,b) for (int i = a;i>=b;i--)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/gcd(a,b))*b
#define debug "#:            "

const int inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);
const int NMAX = 1001;

set<int> a;

int main() {
	fastio
	int t,n;
	cin >> t;
	string s;
	while(t--) {
		cin >> n;
		cin >> s;
		bool check = true;
		for (int i = 0;i<s.size();i++) {
			int j = i;
			while (s[j] == s[i]) j++;
			for (int k = j;k<s.size();k++) if (s[k] == s[i]) {
				cout << "NO" << EL;
				check = false;
				break;
			}
			if (check == false) break;
		}
		if (check == true) cout << "YES" << EL;
	}
	return 0;
}
// Code cua Phuc ;-;
