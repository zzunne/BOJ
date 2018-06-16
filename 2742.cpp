#include <cstdio>
int main() {
	int n = 0;
	while (n <= 0 || n > 100000) scanf_s("%d", &n);
	while (n--)printf("%d\n", n+1);
	return 0; 
}