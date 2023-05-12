#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		long long arr[n+5];
		for(int i=0; i<n; i++) {
			scanf("%lld", &arr[i]);
		}
		for(int i=0; i<n-1; i++) {
			for(int j=i+1; j<n; j++) {
				long long temp = 0;
				if(arr[j]<arr[i]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		int flag = 0;
		for(int i=0; i<n-1; i++) {
			if(arr[i] == arr[i+1]) {
				flag = 1;
				break;
			}
		}
		if(flag==1) printf("NO\n");
		else printf("YES\n");
		
	}
	return 0;
}