#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto v = double{ 0 };
	while (0 < (n--)) {
		double a;
		cin >> a;

		v = 1 - (1 - v) * (1 - a / 100);

		cout << fixed << setprecision(7) << 100 * v << '\n';
	}

	return 0;
}