#include<stdio.h>
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n, gcount = 0, count = 0, tl_count = 0, g_lst_indx = 0, tl_indx = 0; scanf("%d", &n);
		char str[n + 5];
		char ch; scanf(" %c", &ch);
		scanf("%s", str);
		if (ch == 'g') printf("%d\n", 0);
		else {
			for (int i = n - 1; i >= 0; i--) {
				if (str[i] == 'g') {
					g_lst_indx = i;
					break;
				}
			}
			int flag = 0;
			if (g_lst_indx != n - 1) {
				for (int i = g_lst_indx + 1; i < n; i++) {
					if (str[i] == ch) {
						flag = 1;
						tl_indx = i;
						break;
					}
				}
			}
			int max = 0;
			if (flag == 1) {
				for (int i = 0; i < n; i++) {
					if (str[i] != 'g') count++;
					else break;
				}
				max = n - 1 - tl_indx + count + 1;
			}

			for (int i = 0; i < n - 1; i++) {
				if (str[i] == ch) {
					for (int j = i + 1; j < n; j++) {
						if (str[j] == 'g') {
							if (j - i > max) {
								max = j - i;
							}
							i = j;
							break;
						}
					}
				}
			}
			printf("%d\n", max);
		}
	}
	return 0;
}

/*
	Stuff to remember:
					1. Check the space before " %c" in scanf(" %c") while taking character input;
					2. Be careful while using break;

*/

/*
7
5 r
rggry
1 g
g
3 r
rrg
5 y
yrrgy
7 r
rgrgyrg
9 y
rrrgyyygy
2 g
gg

*/