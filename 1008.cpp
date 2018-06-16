#include <cstdio>
int main() {
	double a = 0, b = 0;
	while (a <= 0 || b <= 0 || a >= 10 || b >= 10)
		scanf_s("%lf %lf", &a, &b);
	printf("%.9lf", a/b);
	return 0;
}