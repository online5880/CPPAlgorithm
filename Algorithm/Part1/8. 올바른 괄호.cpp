#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	//freopen("input.txt","rt", stdin);
	char a[100];
	int i, cnt = 0;
	scanf_s("%s", &a);
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] == '(') {
			cnt++;
		}
		else if (a[i] == ')') {
			cnt--;
		}
		if (cnt < 0) break;
	}
	if (cnt == 0) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}


	return 0;
}