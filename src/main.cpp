#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto t = int{};
	cin >> t;
	for (auto i = 1; i <= t; ++i) {
		auto n = int{};
		auto m = int{};
		cin >> n >> m;

		cout << "Case " << i << ": " << m - n + 1 << '\n';
	}

	return 0;
}