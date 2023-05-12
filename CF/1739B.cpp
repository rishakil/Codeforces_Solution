#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int b[n+1];
		for(int i=0; i<n; i++) scanf("%d", &b[i]);
		int flag = 0, sum = 0;
		for(int i=0; i<n; i++) {
			if(b[i] != 0) {
				sum = b[i];
				for(int j = i+1; j<n; j++) {
					if(b[j] != 0) {
						if(b[j]<=sum) {
							flag = 1;
							break;
						}
						sum = sum+b[j];
					}
				}
				break;
			}
		}
		if(flag==1) printf("-1\n");
		else {
			int sum = 0;
			for(int i=0; i<n; i++) {
				sum = sum+b[i];
				printf("%d ", sum);
			}
			printf("\n");
		}
	}
	return 0;
}