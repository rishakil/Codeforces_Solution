#include<stdio.h>

int nondec_or_noninc(int x, int n, int *a);
void _DarkHorse_(int j, int x, int n, int *a);

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int a[n + 5];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		if (n == 1) printf("YES\n");
		else if (n == 2) {
			if (a[0] % a[1] == 0 || a[1] % a[0] == 0) printf("YES\n");
			else printf("NO\n");
		}
		else {
			int flag = 0;
			for (int i = 0; i < n - 2; i++) {
				if (a[i] != 1 && a[i + 1] != 1 && a[i + 2] != 1) {
					int r = i+3;
					int p = nondec_or_noninc(i, r, a);
					if (p == 1) {
						if (a[i + 1] % a[i] != 0) {
							flag = 1;
							break;
						}
					}
					else if (p == 2) {
						if (a[i] % a[i + 1] != 0) {
							flag = 1;
							break;
						}
					}
					else {
						flag = 1;
						break;
					}
				}
				else {
					if (a[i] > a[i + 1]) {
						if (a[i] % a[i + 1] != 0) {
							flag = 1;
							break;
						}
					}
					else {
						if (a[i + 1] % a[i] != 0) {
							flag = 1;
							break;
						}
					}
				}
			}
			if(flag==0) printf("YES\n");
			else printf("NO\n");
		}
	}
	return 0;
}

int nondec_or_noninc(int x, int n, int *a) {
	int flag = 0;
	for (int i = x; i < n - 1; i++) {
		if (a[i + 1] < a[i]) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) return 1;
	else {
		flag = 0;
		for (int i = x; i < n - 1; i++) {
			if (a[i + 1] > a[i]) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) return 2;
		else return 3;
	}
}

void _DarkHorse_(int j, int x, int n, int *a) {
	int flag = 0;
	if (x == 1) {
		flag = 0;
		for (int i = j; i < n - 1; i++) {
			if (a[i + 1] % a[i] != 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) printf("NO\n");
		else printf("YES\n");
	}
	else if (x == 2) {
		flag = 0;
		for (int i = j; i < n - 1; i++) {
			if (a[i] % a[i + 1] != 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) printf("NO\n");
		else printf("YES\n");
	}
	else printf("NO\n");
}