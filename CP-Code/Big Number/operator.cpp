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

const int inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);

int op(string a,string b) {
	if (a.size() > b.size()) {
		while(a.size() != b.size()) {
			b = "0" + b;
		}
	} else if (a.size() < b.size()) {
		while(a.size() != b.size()) {
			a = "0" + a;
		}
	}
	for (int i = 0;i<a.size();i++) {
		if (a[i] < b[i]) return -1;
		else if (a[i] > b[i]) return 1;
	}
	return 0;
}

int main() {
	fastio
	string a,b;
	cin >> a >> b;
	cout << op(a,b);
 	
	return 0;
}
// Code cua Phuc ;-;
