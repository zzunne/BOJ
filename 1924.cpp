#include <iostream>
#include <string>
using namespace std;
int main() {
	int x = 0, y = 0;
	while (!(x >= 1 && x <= 12 && y >= 1 && y <= 31)) scanf_s("%d %d", &x, &y);
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	string day[] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	int days = y - 1;
	if (x == 1) { cout << day[(y - 1) % 7]; }
	else {
		for (int i = 0; i < x - 1; i++) days += month[i];
		cout << day[days % 7] << endl;
	}
}