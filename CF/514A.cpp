#include<stdio.h>
int main() {
	long long int x;
	int y, count = 0, j=0;
	scanf("%lld", &x);
	long long int b = x;
	while (b > 0) {
		b /= 10;
		count++;
	}
	int z[count + 1];
	while (x > 0) {
		j++;
		y = x % 10;
		(y >= 5) ? z[count - j] = 9 - y : z[count - j] = y;
		x /= 10;
	}

	if (z[0] == 0) {
		printf("%d", 9);
		for (int i = 1; i < count; i++) printf("%d", z[i]);
	}
	else for (int i = 0; i < count; i++) printf("%d", z[i]);

	return 0;
}