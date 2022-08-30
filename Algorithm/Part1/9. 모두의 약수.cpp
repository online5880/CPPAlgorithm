#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int cnt[50001];

int main() {
	//freopen("input.txt","rt", stdin);
	int i, j, N;
	scanf_s("%d", &N);

	for (i = 1; i <= N; i++) {
		for (j = i; j <= N; j = j + i)
		{
			cnt[j]++;
		}
	}
	for (i = 1; i <= N; i++) {
		printf("%d ", cnt[i]);
	}

	return 0;
}