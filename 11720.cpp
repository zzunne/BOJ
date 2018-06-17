#include <cstdio>
int main() {
	char input[100] = { 0, };
	int length, i, result = 0;
	scanf_s("%d", &length);
	scanf_s("%s", input);

	for (i = 0; i < length; i++)
		result += (input[i] - '0');

	printf("%d\n", result);

	return 0;
}