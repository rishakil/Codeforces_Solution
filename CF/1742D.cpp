#include<stdio.h>
#include<string.h>
int gcd(int a, int b);
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int arr[10], n;
		scanf("%d", &n);
		memset(arr, 0, 7 * sizeof *arr);
		for (int i = 0; i < 9; i++) {
			printf("%d ", arr[i]);
		}
	}
	//printf("%d", gcd(12, 30));
	return 0;
}

int gcd(int a, int b) {
	while (a != b) (a > b) ? a -= b : b -= a;
	return a;
}

/*


6
3
3 2 1
7
1 3 5 2 4 7 7
5
1 2 3 4 5
3
2 2 4
6
5 4 3 15 12 16
5
1 2 2 3 6


6
12
9
-1
10
7


10
9
8 3 5 4 2 10 7 4 9
5
3 6 4 3 8
5
10 8 7 3 3
9
1 3 6 10 5 2 2 3 3
5
10 5 7 10 5
7
9 10 9 4 10 8 9
10
6 6 9 3 10 9 5 2 8 1
7
6 9 10 10 10 7 2
6
4 4 7 3 6 8
1
6


17
9
7
16
7
13
20
13
10
-1

*/