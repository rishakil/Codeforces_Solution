#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		long long a[n+4];
		for(int i=0; i<n; i++) {
			scanf("%lld", &a[i]);
		}
		for(int i=0; i<n-1; i++) {
			long long temp = 0;
			for(int j=i+1; j<n; j++) {
				if(a[j]<a[i]) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		
		long long min = 0;
		for(int i=0; i<n-2; i++) {
			long long b = (a[i+1] - a[i]) + (a[i+2] - a[i+1]);
			if(i==0) {
				min = b;
			}
			if(b<min) {
				min = b;
			}
		}
		printf("%lld\n", min);
	}
	return 0;
}