#include <cstdio>
int main() {
	int n = 0, sum = 0;
	while (!(n >= 1 && n <= 10000))scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) sum += i;
	printf("%d", sum);
}