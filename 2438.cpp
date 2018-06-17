#include <cstdio>
int main() {
	int n = 0;
	while (!(n >= 1 && n <= 100)) scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		int cnt = i + 1;
		while (cnt--) printf("*");
		printf("\n");
	}
	return 0;
}