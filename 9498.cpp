#include<cstdio>
int main() {
	int score = -1;
	while (!(score >= 0 && score <= 100)) scanf_s("%d", &score);
	if (score > 89) printf("A");
	else if (score > 79) printf("B");
	else if (score > 69) printf("C");
	else if (score > 59) printf("D");
	else printf("F");

}