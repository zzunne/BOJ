#include <cstdio>
int main() {
	int a = 0, b = 0, c = 0;
	while (a < 2 || b < 2 || c < 2 || a>10001 || b>10001 || c>10001)
		scanf_s("%d %d %d", &a, &b, &c);
	printf("%d\n%d\n%d\n%d", (a + b) % c, (a%c + b%c) % c, (a*b) % c, (a%c*b%c) % c);
	return 0;
}