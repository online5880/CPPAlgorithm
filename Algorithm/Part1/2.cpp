// 2. �ڿ����� ��
#include <iostream>

using namespace std;

int main() {

	int a, b, sum = 0, i = 0;

	cin >> a >> b;
	for (i = a; i < b; i++) {
		cout << i << "+";
		sum += i;
	}

	cout << a << "=" << sum + i;

	return 0;
}