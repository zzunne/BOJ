#include <cstdio>
int main() {
	int a = 0, b = 0;
	while(a <= 0 || b <= 0 || a >= 10 || b >= 10)
		scanf("%d %d", &a, &b);
	printf("%d", a*b);
}