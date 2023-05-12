#include<stdio.h>
int main() {
	int n, a, b, _count = 1, count = 1;
	scanf("%d", &n);
	scanf("%d", &a);
	for (int i = 0; i < n - 1; i++) {
		scanf("%d", &b);
		if (b > a) count++;
		else {
			if (count > _count) {
				_count = count;
			}
			count=1;
		}
		a = b;
	}
	printf("%d", (count>_count) ? count:_count);
}