// 1. 1부터 N까지의 M의 배수합

#include <iostream>

int main() {

	int n, m, i, sum = 0;

	std::cin >> n >> m;
	for (i = 1; i <= n; i++) {
		if (i % m == 0) {
			sum += i;
		}
	}

	std::cout << sum << std::endl;

	return 0;
}