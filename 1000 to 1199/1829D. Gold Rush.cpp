#include <iostream>
#include <vector>

using namespace std;

int break_test(int n, int m) {
	if (n == m) return true;
	else if (n % 3 != 0) {
		return false;
	}
	else {
		return(break_test(n / 3, m) || break_test(2 * n / 3, m));
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tests;
	int n, m;
	bool result;
	cin >> tests;
	for (int i = 0; i < tests; i++) {
		cin >> n >> m;
		result = break_test(n, m);
		if (result) {
			cout << "YES" << '\n' << flush;
		}
		else {
			cout << "NO" << '\n' <<flush;
		}
	}
}