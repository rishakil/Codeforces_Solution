#include<stdio.h>
void _DarkHorse_();

int main() {
	_DarkHorse_();
	return 0;
}

void _DarkHorse_() {
	int n;
	scanf("%d", &n);
	int p, q, max = 0, min = 0, maxpos = 1, minpos = 1, count = 0;
	for (int i = 0; i < n - 1; i++) {
		if (i == 0) {
			scanf("%d", &p);
			scanf("%d", &q);
			if (p == q) {
				max = p;
				min = q;
				minpos++;
			}
			else {
				if (p > q) {
					max = p;
					min = q;
					minpos++;
				}
				else {
					max = q;
					min = p;
					maxpos++;
				}
			}
		}
		else {
			scanf("%d", &p);
			if (p > max) {
				max = p;
				maxpos = i + 2;
			}
			else {
				if (p < min || p == min) {
					min = p;
					minpos = i + 2;
				}
			}
		}

	}
	printf("%d", (maxpos < minpos) ? maxpos + n - minpos - 1 : maxpos + n - minpos - 2);
}