#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		char arr[n+4];
		scanf("%s", arr);
		int balance =0, ans = 0;
		for(int i=0; i<n; i++) {
			if(arr[i] == '(') balance++;
			else {
				balance--;
				if(balance<0) {
					ans++;
					balance = 0;
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}


/*
4
2
)(
4
()()
8
())()()(
10
)))((((())


*/