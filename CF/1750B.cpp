#include<stdio.h>
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		char arr[n + 2];
		scanf("%s", arr);
		int o = 0, z = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] == '1') o++;
			else z++;
		}

		long long int ans = 1, temp = 1;
		for (int i = 1; i < n; i++) {
			if (arr[i] == arr[i - 1]) {
				++temp;
			}
			else {
				(ans>temp) ? ans = ans: ans = temp;
				temp = 1;
			}
		}
		(ans>temp) ? ans = ans: ans = temp;
		long long int p = ans*ans, q = o*z;
		(p>q) ? printf("%lld\n", p):printf("%lld\n", q);
	}
	return 0;
}