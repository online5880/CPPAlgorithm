#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	//freopen("input.txt","rt", stdin);
	char a[100], b[100];
	int i, p = 0;
	gets_s(a);
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] != ' ') {
			if (a[i] >= 65 && a[i] <= 90) // ���� �빮�� 65~90  ���ĺ� �빮�� -> �ҹ��ڷ� ��ȯ�Ϸ��� 32�� �����־�� ��. 
			{
				b[p++] = a[i] + 32;
			}
			else
			{
				b[p++] = a[i];
			}
		}
	}
	b[p] = '\0';
	printf("%s\n", b);


	return 0;
}