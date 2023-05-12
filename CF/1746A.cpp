#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b;
		scanf("%d %d", &a, &b);
		int arr[a+5];
		for (int i = 0; i < a; i++) {
			scanf("%d", &arr[i]);
		}
		int flag = 0;
		for (int i = 0; i < a; i++) {
			if (arr[i] == 1) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) printf("NO\n");
		else if(a==b || b>a) {
			flag = 0;
			for(int i=0; i<a; i++) {
				if(arr[i] == 0) {
					flag = 1;
					break;
				}
			}
			if(flag==1) printf("NO\n");
			else printf("YES\n");
		}
		else {
			if ((a - b) % (b - 1) == 0) printf("YES\n");
			else {
				flag = 0;
				int c = b + ((a-b) / (b-1))*(b-1);
				for(int i = 0; i<c; i++) {
					if(arr[i] == 1) {
						flag = 1;
						break;
					}
				}
				int _flag = 0;
				for(int i=c; i<a; i++) {
					if(arr[i] == 0) {
						_flag = 1;
						break;
					}
				}
				if(flag == 1 && _flag == 0) {
					printf("YES\n");
				}
				else printf("NO\n");
			}
		}
	}
	return 0;
}

/*

YES
YES
YES
NO
YES
YES
YES


*/