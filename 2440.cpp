#include <cstdio>
int main() {
	int n = 0;
	while (!(n >= 1 && n <= 100)) scanf_s("%d", &n);
	while (n) {
		for (int i = 0; i < n; i++) printf("*");
		printf("\n");
		n--;
	}
	return 0;
}