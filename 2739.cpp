#include <cstdio>
int main() {
	int n = 0;
	while (n < 1 || n>9) scanf_s("%d", &n);
	for (int i = 0; i < 9; i++) printf("%d * %d = %d\n", n, i + 1, n*(i + 1));
	return 0; 
}