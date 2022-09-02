#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	//	freopen("input.txt", "rt", stdin);
	int n, sum = 0, c = 1, d = 9, res = 0;

	scanf_s("%d", &n);

	while (sum + d < n) {
		res = res + (c * d);
		sum = sum + d;
		c++;
		d = d * 10;
	}
	res = res + ((n - sum) * c);
	printf("%d\n", res);


	return 0;

	// 다시 봐야할 듯
}
