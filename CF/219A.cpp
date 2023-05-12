#include<stdio.h>
#include<string.h>
int main() {
	int k;
	char str[1020];
	scanf("%d", &k);
	scanf("%s", str);
	int n = strlen(str);
	//printf("%d\n", n);
	// sorting the string lexicographically
	for (int i = 0; i < n - 1; i++) {
		int temp = 0;
		for (int j = i + 1; j < n; j++) {
			if (str[i] > str[j]) {
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	//printf("%s\n", str);
	// counting the frequency of distinct character and number of distinct character simultaneously
	int dist[27], m = 0, p = 0;
	for (int i = 0; i < n - 1; i++) {
		if (str[i] != str[i + 1]) {
			dist[m] = i + 1 - p;
			m++;
			p = i + 1;
		}
	}
	dist[m] = n - p;
	/*for (int i = 0; i < m + 1; i++) {
		printf("%d ", dist[i]);
	}
	printf("\n");*/

	int s = 0;
	for (int i = 0; i < m + 1; i++) {
		s = s + (dist[i] % k);
	}
	if (n % k == 0 && s == 0) {
		//int pack = n / k;
		for (int i = 0; i < k; i++) {
			int l = 0;
			for (int z = 0; l < m + 1; z = z + dist[l-1]) {
				for (int y = 0; y < (dist[l] / k); y++) {
					printf("%c", str[z]);
				}
				l++;
			}
		}
	}
	else printf("%d", -1);

	return 0;
}

/*
	10
	A: aaaaaaaaabbbbcdddeeeffffffggggghhhhhhhhiiijjjjjjkkkklllllmmmmmnoooopppqqqqrtttttuuuvwwwwwxxxyyyyyzzz
	O: aaaaaaaaaaaaaaaaabbbeeeeeefffffgggggggghhhiiiiiijjjjkkkkkllllllmmmmmmmoooooqqqqqrrrtuuuuuvvvwwwwwxxx

*/