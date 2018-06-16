#include <cstdio>

int main() {
	int a = 0, b = 0;
	while (a < 1 || b < 1 || a>10001 || b>10001)
		scanf_s("%d %d", &a, &b);
	printf("%d\n%d\n%d\n%d\n%d", a + b, a - b, a*b, a / b, a%b);
}