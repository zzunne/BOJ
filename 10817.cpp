#include <cstdio>
int main() {
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a >= b) {
		if (b >= c) printf("%d",b);
		else if (c >= a) printf("%d", a);
		else printf("%d",c);
	}
	else { // b>a
		if (a >= c) printf("%d",a);
		else if (c >= b) printf("%d",b);
		else printf("%d",c);
	}
}