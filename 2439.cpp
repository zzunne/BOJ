#include <cstdio>
int main() {
	int n = 0;
	while (!(n >= 1 && n <= 100)) scanf_s("%d", &n);
	int cnt = n;
	while (cnt--) {
		for (int i = 0; i < cnt; i++)printf(" ");
		for (int i = 0; i < n - cnt; i++) printf("*");
		printf("\n");
	}
	return 0;
}