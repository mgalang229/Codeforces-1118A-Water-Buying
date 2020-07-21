#include <bits/stdc++.h>

using namespace std;

void test_case() {
	long long n, a, b;
	cin >> n >> a >> b;
	cout << (n / 2) * min (2 * a, b) + (n % 2) * a << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
