#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, c;
		scanf("%d %d", &n, &c);
		int arr[n+1];
		for(int i=0; i<n; i++) {
			scanf("%d", &arr[i]);
		}
		for(int i=0; i<n-1; i++) {
			int temp = 0;
			for(int j=i+1; j<n; j++) {
				if(arr[j]<arr[i]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		int cost = 0;
		for(int k=0; ; ) {
			int count = 0;
			for(int l=k+1; l<n; l++) {
				if(arr[k] == arr[l]) count++;
				else {
					k = l;
					(c<=count+1) ? cost = cost+c : cost = cost+count+1;
					break;
				}
			}
			if(arr[k]==arr[n-1]) {
				count = n-k;
				(count<c) ? cost = cost + count: cost = cost + c;
				break;
			}
			else continue;
		}
		printf("%d\n", cost);
	}
	return 0;
}