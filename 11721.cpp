#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string.h>
int main() {
	char input[100] = { 0, };
	scanf("%s", input);
	for (int i = 0; i < strlen(input); i++) {
		printf("%c", input[i]);
		if ((i + 1) % 10 == 0) printf("\n");
	}
}